//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCOrderlistViewController.h"

#import "DCOrderListWaitTripS2STopHeaderUnitDelegate.h"
#import "DCSegmentContainerViewControllerProtocol.h"

@class DCOLOMG, DCOLWaitTripBusinessModel, DCOLWaitTripDataSource<DCAutoload>, DCOLWaitTripSegmentViewController, DCOrderListModelTypeGuideCom, DCOrderListWaitTripS2STopHeaderUnit<DCAutoload>, DCOrderlistADCom_dccom_DCComTUndefine<DCAutoload>, DCOrderlistFilterBarCom_dccom_DCComTUndefine<DCAutoload>, DCOrderlistTipCom_dccom_DCComTUndefine<DCAutoload>, NSString, UIView;

@interface DCOLWaitTripViewController : DCOrderlistViewController <DCSegmentContainerViewControllerProtocol, DCOrderListWaitTripS2STopHeaderUnitDelegate>
{
    _Bool _hasRequesedFloatLayer;
    CDUnknownBlockType navigationTitleDidUpdate;
    CDUnknownBlockType showNavTitleRedDotBlock;
    CDUnknownBlockType childDidRequestSuccess;
    DCOLWaitTripSegmentViewController *_container;
    DCOLWaitTripBusinessModel *_businessModel;
    DCOrderListWaitTripS2STopHeaderUnit<DCAutoload> *_topHeaderCom;
    DCOLOMG *_orderlistOMG;
    DCOrderListModelTypeGuideCom *_topTipsCom;
    UIView *_headerContentView;
}

@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(retain, nonatomic) DCOrderListModelTypeGuideCom *topTipsCom; // @synthesize topTipsCom=_topTipsCom;
@property(retain, nonatomic) DCOLOMG *orderlistOMG; // @synthesize orderlistOMG=_orderlistOMG;
@property(retain, nonatomic) DCOrderListWaitTripS2STopHeaderUnit<DCAutoload> *topHeaderCom; // @synthesize topHeaderCom=_topHeaderCom;
@property(nonatomic) _Bool hasRequesedFloatLayer; // @synthesize hasRequesedFloatLayer=_hasRequesedFloatLayer;
@property(copy, nonatomic) DCOLWaitTripBusinessModel *businessModel; // @synthesize businessModel=_businessModel;
@property(nonatomic) __weak DCOLWaitTripSegmentViewController *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType childDidRequestSuccess; // @synthesize childDidRequestSuccess;
@property(copy, nonatomic) CDUnknownBlockType showNavTitleRedDotBlock; // @synthesize showNavTitleRedDotBlock;
@property(copy, nonatomic) CDUnknownBlockType navigationTitleDidUpdate; // @synthesize navigationTitleDidUpdate;
- (void).cxx_destruct;
- (void)postNotiToFilterView;
- (void)setupLoad;
- (_Bool)shouldShowFloatLayers;
- (void)addOperationParams:(id)arg1;
- (void)showFloatAdViewWithFrame:(struct CGRect)arg1 dataModel:(id)arg2;
- (long long)floatLayerType;
- (void)requestFloatLayerData;
- (void)resetContainerFloatLayerTag;
- (void)handleNewDataWithUserInfo:(id)arg1;
- (void)reloadInviteStateWithInviteID:(id)arg1;
- (id)modelType;
- (int)pageType;
- (void)orderlistDidClickYellowBar;
- (void)showYellowBarWithCount:(long long)arg1;
- (void)resendTrip;
- (void)showNoDataTip;
- (void)showTimeoutTip;
- (double)orderlistFilterBarLayoutYOnWindow;
- (void)setupListAdView:(id)arg1;
- (void)autoMatchNeedRefreshData;
- (void)topHeaderViewHeightDidChanged:(double)arg1;
- (void)detailContentViewIsShow:(_Bool)arg1;
- (struct CGRect)headerContentBounds;
- (void)orderlistDataSourceMaker:(id)arg1;
- (void)updateContainerNavigationTitle;
- (void)tappedADView;
- (void)showedADView:(_Bool)arg1;
- (void)orderlistLoadMore;
- (void)reloadGrouplistView;
- (void)requestSuccessCallContainer;
- (void)setupStatusTips;
- (_Bool)isStationExpire;
- (_Bool)isRouteExpire;
- (void)setupStatusWithTimeout;
- (_Bool)isExpire;
- (void)listRequesterFinished:(id)arg1;
- (void)setupRequestFinishAction:(id)arg1;
- (void)listRequesterSuccess:(id)arg1;
@property(readonly, nonatomic) double titlePosition;
- (void)_updateBlueTipBarWithModel:(id)arg1;
- (void)startRequestBlueTipBarDataAndUpdate;
- (void)setupTopTipsBar;
- (_Bool)canShowTopTipsBar;
- (double)filterBarAttractedYOnWindow;
- (id)filterComAttractedFatherView;
- (void)setupTopHeader;
- (void)setupSubViews;
- (void)setup;
- (void)reloadWithApiModel:(id)arg1;
- (void)_loadData;
- (void)childDidAppearWithData:(id)arg1;
- (void)container:(id)arg1 didClickIMBtn:(id)arg2;
- (void)container:(id)arg1 didClickCancelBtn:(id)arg2;
- (void)containerDidGestureBack;
- (void)containerDidClickBackButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) DCOrderlistADCom_dccom_DCComTUndefine<DCAutoload> *adCom;
@property(retain, nonatomic) DCOLWaitTripDataSource<DCAutoload> *dataSourceCom;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) DCOrderlistFilterBarCom_dccom_DCComTUndefine<DCAutoload> *filterBarCom;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) DCOrderlistTipCom_dccom_DCComTUndefine<DCAutoload> *tipCom;

@end

