#include "DataFormats/L1TCorrelator/interface/TkHTMiss.h"

using namespace l1t;

TkHTMiss::TkHTMiss() {}

TkHTMiss::TkHTMiss(const LorentzVector& p4,
                                       const double& etTotal,
                                       const edm::RefProd<TkJetCollection>& jetCollRef,
                                       const edm::Ref<TkPrimaryVertexCollection>& avtxRef,
                                       int bx)
    : L1Candidate(p4), EtTot_(etTotal), jetCollectionRef_(jetCollRef), vtxRef_(avtxRef), bx_(bx) {
  if (vtxRef_.isNonnull()) {
    float z = vtxRef()->zvertex();
    setVtx(z);
  }
}
