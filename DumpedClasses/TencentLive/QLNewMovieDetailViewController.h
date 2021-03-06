//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseDetailViewController.h"

#import "NetworkCheckerDelegate.h"
#import "PlayerUtilsV2DataSourceProtocal.h"
#import "QLDetailIntroduciontCellV1DatasourceDelegate.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLModelsUserInfoDataSource.h"
#import "QLMomentTimelineViewDelegate.h"
#import "QLMovieDetailAdsBusinessDelegate.h"
#import "QLMovieDownloadDelegate.h"
#import "QLNewDetailsMutiTabFloatViewControllerDataSourceProtocol.h"
#import "QLNewDetailsSubViewPresenterDataSource.h"
#import "QLOpenSearchDelegate.h"
#import "QLSprayPlayerCtlProtocol.h"
#import "QLStarCommentInputViewDelegate.h"
#import "QLThumbCreationUserInfo.h"
#import "QLVideoListsViewControllerHelper.h"
#import "TimelineEngineDelegate.h"

@class JumpMovieDetailDownLoadModel, NSArray, NSMutableArray, NSString, QLCommentBgView, QLDLNADevice, QLDetailFeedFlowModel, QLDetailModelProcessDispatcher, QLHollywoodGiftButton, QLJCECacheListModel, QLJCEDetailModel, QLJCEVipTipsInfoModel, QLMomentExposureItem, QLMomentPublish, QLMomentTimelineView, QLMovieActionItem, QLMovieItem, QLMutiLangSwitchJumpObj, QLPlayerViewScrollMgr, QLSImageView, QLScreenShotMgr, QLStarCommentInputView, QLThirdPartyVideoTipView, UIImageView, UILabel, UIView;

@interface QLNewMovieDetailViewController : QLBaseDetailViewController <QLMomentTimelineViewDelegate, TimelineEngineDelegate, QLMovieDetailAdsBusinessDelegate, QLStarCommentInputViewDelegate, QLJumpObjectOpenUrlDelegate, QLModelsUserInfoDataSource, QLMovieDownloadDelegate, QLThumbCreationUserInfo, QLOpenSearchDelegate, QLNewDetailsSubViewPresenterDataSource, PlayerUtilsV2DataSourceProtocal, QLNewDetailsMutiTabFloatViewControllerDataSourceProtocol, NetworkCheckerDelegate, QLVideoListsViewControllerHelper, QLSprayPlayerCtlProtocol, QLDetailIntroduciontCellV1DatasourceDelegate>
{
    _Bool _autoPlaying;
    NSMutableArray *_scrollDisabledCells;
    _Bool _hasShowOuterSearchNoFreePrompt;
    struct CGRect frameBeforeRotation;
    struct CGRect frameAfterRotation;
    long long _rootPlayerPlayStateWhenLeaveDetailPage;
    _Bool _shouldCheckPlayerStatusWhenAppear;
    _Bool _isFromDownload;
    _Bool _isModelDataLoadad;
    _Bool _shouldLoadHistory;
    _Bool _shouldShowTipIfRecentplayVideoIsNotInVideoList;
    _Bool _isDownLoadVideoFromH5;
    _Bool _h5JumpDownloadRight;
    _Bool _shouldSaveOutwebWatchRecord;
    _Bool _commentCanLoadmore;
    _Bool _commentLoaded;
    _Bool _isCoralInitLoaded;
    _Bool _hasGiftBtn;
    _Bool _viewDidAppeared;
    _Bool _downForbidActioned;
    _Bool _playerReseted;
    _Bool _notifiedForJump;
    _Bool _isFromCall;
    _Bool _isPageAlreadyExistAndRefreshSelf;
    NSString *_lid;
    NSString *_cid;
    NSString *_vid;
    NSString *_historyVid;
    NSString *_expansion;
    NSString *_outWebId;
    id <QLPushNotificationViewPopOutDelegate> _pushViewPopOutDelegate;
    NSString *_playerReportKey;
    NSString *_playerReportParam;
    NSString *_aid;
    NSString *_lastPlayTime;
    QLJCEDetailModel *_dataModel;
    JumpMovieDetailDownLoadModel *_jumpMovieDetailDownLoadModel;
    QLDetailModelProcessDispatcher *_detailModelPD;
    unsigned long long _commentCount;
    QLMomentExposureItem *_exposureItem;
    QLMomentTimelineView *_followAnimationView;
    QLMomentPublish *_mItemForFollowCount;
    QLMomentPublish *_mItemForSync;
    NSMutableArray *_userDataArray;
    NSArray *_aryOnaViews;
    long long _directPlayTvType;
    QLDLNADevice *_device;
    NSString *_positiveVideoListDatakey;
    QLHollywoodGiftButton *_giftBtn;
    QLMovieActionItem *_movieActionItem;
    QLDetailFeedFlowModel *_feedListModel;
    QLStarCommentInputView *_starCommentInputView;
    NSString *_pageJumpData;
    long long _maxPlayedIndexOfEpisode;
    QLThirdPartyVideoTipView *_openPlayerView;
    QLSImageView *_userHeaderView;
    QLSImageView *_vipView;
    QLCommentBgView *_commentBgView;
    QLSImageView *_playerBottomShadowView;
    double _commentTopPosition;
    UIView *_commentBgTitle;
    NSString *_entryVid;
    QLMovieItem *_prevMovieItem;
    UILabel *_commentCountLbl;
    CDUnknownBlockType _downloadRightBlock;
    QLJCEVipTipsInfoModel *_vipTipsInfoModel;
    UIImageView *_bgImgView;
    UIImageView *_tipImgView;
    NSString *_beforeDefaultVideoDataKey;
    QLJCECacheListModel *_cacheListModel;
    QLPlayerViewScrollMgr *_miniPlayerMgr;
    NSString *_scrollTarget;
    QLScreenShotMgr *_screenShotMgr;
    QLMutiLangSwitchJumpObj *_mutiLangSwitchJumpObj;
}

+ (id)getCacheItemsByVipOrNotFromOriginVideoData:(id)arg1;
+ (id)getVideoItemsByVipOrNotFromOriginVideoData:(id)arg1;
+ (id)introTitleForCurrentDetailController:(id)arg1;
+ (id)getShareItemForCurrentVideoFromCtl:(id)arg1;
+ (id)getTopMostItemDataForCurrentVideoFromCtl:(id)arg1;
+ (id)getExpansionDataForCurrentVideoFromCtl:(id)arg1;
+ (_Bool)objectIsNotNilAndIsString:(id)arg1;
+ (void)JumpDownloadPage:(id)arg1;
+ (void)jumpToNewDetailFromDownloadWithlid:(id)arg1 cid:(id)arg2 vid:(id)arg3 expansion:(id)arg4 streamStyle:(long long)arg5 reportParam:(id)arg6;
+ (void)jumpToNewDetailPageWithlid:(id)arg1 cid:(id)arg2 vid:(id)arg3 paraDic:(id)arg4;
+ (void)jumpToNewDetailPageWithItem:(id)arg1 paraDic:(id)arg2;
+ (void)jumpToNewDetailPageWithItem:(id)arg1 paraDic:(id)arg2 withAction:(id)arg3;
+ (id)getTopMostDetailCtl;
+ (_Bool)OpenJumpUrlWithobject;
+ (id)getRedirectOpenURLWithChannelID:(id)arg1 soureceURL:(id)arg2;
@property(retain, nonatomic) QLMutiLangSwitchJumpObj *mutiLangSwitchJumpObj; // @synthesize mutiLangSwitchJumpObj=_mutiLangSwitchJumpObj;
@property(nonatomic) _Bool isPageAlreadyExistAndRefreshSelf; // @synthesize isPageAlreadyExistAndRefreshSelf=_isPageAlreadyExistAndRefreshSelf;
@property(retain, nonatomic) QLScreenShotMgr *screenShotMgr; // @synthesize screenShotMgr=_screenShotMgr;
@property(copy, nonatomic) NSString *scrollTarget; // @synthesize scrollTarget=_scrollTarget;
@property(nonatomic) _Bool isFromCall; // @synthesize isFromCall=_isFromCall;
@property(retain, nonatomic) QLPlayerViewScrollMgr *miniPlayerMgr; // @synthesize miniPlayerMgr=_miniPlayerMgr;
@property(retain, nonatomic) QLJCECacheListModel *cacheListModel; // @synthesize cacheListModel=_cacheListModel;
@property(copy, nonatomic) NSString *beforeDefaultVideoDataKey; // @synthesize beforeDefaultVideoDataKey=_beforeDefaultVideoDataKey;
@property(retain, nonatomic) UIImageView *tipImgView; // @synthesize tipImgView=_tipImgView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) QLJCEVipTipsInfoModel *vipTipsInfoModel; // @synthesize vipTipsInfoModel=_vipTipsInfoModel;
@property(copy, nonatomic) CDUnknownBlockType downloadRightBlock; // @synthesize downloadRightBlock=_downloadRightBlock;
@property(retain, nonatomic) UILabel *commentCountLbl; // @synthesize commentCountLbl=_commentCountLbl;
@property(nonatomic) _Bool notifiedForJump; // @synthesize notifiedForJump=_notifiedForJump;
@property(retain, nonatomic) QLMovieItem *prevMovieItem; // @synthesize prevMovieItem=_prevMovieItem;
@property(copy, nonatomic) NSString *entryVid; // @synthesize entryVid=_entryVid;
@property(nonatomic) _Bool playerReseted; // @synthesize playerReseted=_playerReseted;
@property(retain, nonatomic) UIView *commentBgTitle; // @synthesize commentBgTitle=_commentBgTitle;
@property(nonatomic) double commentTopPosition; // @synthesize commentTopPosition=_commentTopPosition;
@property(retain, nonatomic) QLSImageView *playerBottomShadowView; // @synthesize playerBottomShadowView=_playerBottomShadowView;
@property(retain, nonatomic) QLCommentBgView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(retain, nonatomic) QLSImageView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) QLSImageView *userHeaderView; // @synthesize userHeaderView=_userHeaderView;
@property _Bool downForbidActioned; // @synthesize downForbidActioned=_downForbidActioned;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(retain, nonatomic) QLThirdPartyVideoTipView *openPlayerView; // @synthesize openPlayerView=_openPlayerView;
@property long long maxPlayedIndexOfEpisode; // @synthesize maxPlayedIndexOfEpisode=_maxPlayedIndexOfEpisode;
@property(copy, nonatomic) NSString *pageJumpData; // @synthesize pageJumpData=_pageJumpData;
@property(retain, nonatomic) QLStarCommentInputView *starCommentInputView; // @synthesize starCommentInputView=_starCommentInputView;
@property(retain, nonatomic) QLDetailFeedFlowModel *feedListModel; // @synthesize feedListModel=_feedListModel;
@property(retain, nonatomic) QLMovieActionItem *movieActionItem; // @synthesize movieActionItem=_movieActionItem;
@property(nonatomic) __weak QLHollywoodGiftButton *giftBtn; // @synthesize giftBtn=_giftBtn;
@property(nonatomic) _Bool hasGiftBtn; // @synthesize hasGiftBtn=_hasGiftBtn;
@property(copy, nonatomic) NSString *positiveVideoListDatakey; // @synthesize positiveVideoListDatakey=_positiveVideoListDatakey;
@property(retain, nonatomic) QLDLNADevice *device; // @synthesize device=_device;
@property(nonatomic) long long directPlayTvType; // @synthesize directPlayTvType=_directPlayTvType;
@property _Bool isCoralInitLoaded; // @synthesize isCoralInitLoaded=_isCoralInitLoaded;
@property _Bool commentLoaded; // @synthesize commentLoaded=_commentLoaded;
@property _Bool commentCanLoadmore; // @synthesize commentCanLoadmore=_commentCanLoadmore;
@property(retain, nonatomic) NSArray *aryOnaViews; // @synthesize aryOnaViews=_aryOnaViews;
@property(retain, nonatomic) NSMutableArray *userDataArray; // @synthesize userDataArray=_userDataArray;
@property(retain, nonatomic) QLMomentPublish *mItemForSync; // @synthesize mItemForSync=_mItemForSync;
@property(retain, nonatomic) QLMomentPublish *mItemForFollowCount; // @synthesize mItemForFollowCount=_mItemForFollowCount;
@property(retain, nonatomic) QLMomentTimelineView *followAnimationView; // @synthesize followAnimationView=_followAnimationView;
@property(nonatomic) _Bool shouldSaveOutwebWatchRecord; // @synthesize shouldSaveOutwebWatchRecord=_shouldSaveOutwebWatchRecord;
@property(retain, nonatomic) QLMomentExposureItem *exposureItem; // @synthesize exposureItem=_exposureItem;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) _Bool h5JumpDownloadRight; // @synthesize h5JumpDownloadRight=_h5JumpDownloadRight;
@property(nonatomic) _Bool isDownLoadVideoFromH5; // @synthesize isDownLoadVideoFromH5=_isDownLoadVideoFromH5;
@property(retain, nonatomic) QLDetailModelProcessDispatcher *detailModelPD; // @synthesize detailModelPD=_detailModelPD;
@property(retain) JumpMovieDetailDownLoadModel *jumpMovieDetailDownLoadModel; // @synthesize jumpMovieDetailDownLoadModel=_jumpMovieDetailDownLoadModel;
@property _Bool shouldShowTipIfRecentplayVideoIsNotInVideoList; // @synthesize shouldShowTipIfRecentplayVideoIsNotInVideoList=_shouldShowTipIfRecentplayVideoIsNotInVideoList;
@property _Bool shouldLoadHistory; // @synthesize shouldLoadHistory=_shouldLoadHistory;
@property _Bool isModelDataLoadad; // @synthesize isModelDataLoadad=_isModelDataLoadad;
@property(retain, nonatomic) QLJCEDetailModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) NSString *lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(nonatomic) _Bool isFromDownload; // @synthesize isFromDownload=_isFromDownload;
@property(copy, nonatomic, getter=aidForRemark) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *playerReportParam; // @synthesize playerReportParam=_playerReportParam;
@property(copy, nonatomic) NSString *playerReportKey; // @synthesize playerReportKey=_playerReportKey;
@property __weak id <QLPushNotificationViewPopOutDelegate> pushViewPopOutDelegate; // @synthesize pushViewPopOutDelegate=_pushViewPopOutDelegate;
@property(copy, nonatomic) NSString *outWebId; // @synthesize outWebId=_outWebId;
@property(copy, nonatomic) NSString *expansion; // @synthesize expansion=_expansion;
@property(copy, nonatomic) NSString *historyVid; // @synthesize historyVid=_historyVid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
- (void).cxx_destruct;
- (void)reachabilityChanged;
- (id)makeCacheKeyForCoverListModelWithDataKey:(id)arg1;
- (id)extensionForCoverListModel;
- (id)navigationListInfoForMutiTabFloatViewWithMainDataKey:(id)arg1;
- (void)customAutoScrollForController:(id)arg1;
- (id)playerCtlForController;
- (id)sprayContextDataModel;
- (double)modifiedVideoTimeForWatchRecordWithVid:(id)arg1 andVideoTime:(double)arg2;
- (_Bool)isNeedJumpForeAdsWithVid:(id)arg1;
- (_Bool)switchLanguageForCurrentPlayingVideoWithLanguageId:(id)arg1 withDefaultAction:(id)arg2;
- (void)subViewDidDismiss;
- (void)subViewDidPresent;
- (id)generatePageCacheDataKey;
- (_Bool)hasDataListWithDataKey:(id)arg1;
- (id)getNextItemWithVideoItemExtraData:(id)arg1;
- (_Bool)isTopVCSatisfiedForJumpAction;
- (void)doExtrActionOnTargetCell:(id)arg1;
- (id)getTargetVisibleTabelViewCellWithItemExtraDataForPoster:(id)arg1;
- (id)getTargetVisibleTabelViewCellWithItemExtraDataForVideo:(id)arg1;
- (void)doDetailPushNotificationViewPopOut;
- (void)DoDelayExtraActionWithVideoItemExtraData:(id)arg1;
- (id)getFirstVideoItemWithVerticalVideoList:(id)arg1;
- (id)getFirstVideoItemWithOldVideoList:(id)arg1;
- (id)getFirstCoverItemWithOldPosterList:(id)arg1;
- (id)getFirstCoverItemWithVerticalPosterList:(id)arg1;
- (void)handleModifyActionWithCoverItemAction:(id)arg1;
- (void)handleFirstActionUrlWithOldPosterList:(id)arg1;
- (void)handleFirstActionUrlWithVerticalPosterList:(id)arg1;
- (void)DoExtraActionWithVideoItemExtraData:(id)arg1;
- (void)cancelMovieAction;
- (void)delayEnterDownloadController;
- (void)startDownloadVideo;
- (id)getDownloadBasicInfo;
- (void)getCurrentCoverCacheVideoList:(id)arg1 coverId:(id)arg2 videoId:(id)arg3 cacheKey:(id)arg4;
- (void)showHollywoodGiftButtonAnimation;
- (void)hiddenHeadViewWhenAutoPlay;
- (void)refreshHeaderUIWithPlayFired;
- (void)showNavbar:(_Bool)arg1;
- (void)bringGiftGuideToFront;
- (void)hideGiftGuideWithAnimation;
- (void)hideGiftGuide:(_Bool)arg1;
- (void)showGiftGuide;
- (long long)indexOfCurrentShouldScrollToByDataKey:(id)arg1 sourceType:(long long)arg2;
- (_Bool)shouldHighlightForCurrentItem:(id)arg1 datakey:(id)arg2 index:(long long)arg3;
- (_Bool)hasFooterDargStyleByDataKey:(id)arg1 sourceType:(long long)arg2;
- (_Bool)hasNextPageForDataKey:(id)arg1 sourceType:(long long)arg2;
- (id)viewWithDataKey:(id)arg1;
- (id)verticalVideoCellWithDataKey:(id)arg1;
- (id)verticalPosterCellWithDataKey:(id)arg1;
- (id)getCacheDataKey;
- (_Bool)shouldStartNormalPlay:(id)arg1;
- (void)handlePlayActionWithItemData:(id)arg1 dataKey:(id)arg2 index:(long long)arg3 isPop:(_Bool)arg4 withAction:(id)arg5;
- (void)handlePlayActionWithItemData:(id)arg1 dataKey:(id)arg2 index:(long long)arg3 isPop:(_Bool)arg4;
- (void)load:(int)arg1 more:(_Bool)arg2 sourceType:(long long)arg3 dataKey:(id)arg4;
- (id)sourceVideoListsByDatakey:(id)arg1 sourceType:(long long)arg2;
- (long long)getViewStyleValue;
- (void)findVideIdToPlayFromVideoId:(id)arg1;
- (void)jumpToVideo:(id)arg1;
- (void)launchDownloadPanelAfter;
- (void)restoreActionFlag:(id)arg1;
- (void)playIndexChanged:(id)arg1;
- (void)changePlayVideoListNotification:(id)arg1;
- (id)getPlayingMovieItem;
- (id)floatCommentView;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)unfoldPlayerIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)getHistoryRecordTimeForCid:(id)arg1 Vid:(id)arg2 Index:(long long)arg3;
- (id)getCurrentAttentionItem;
- (void)reloadPageModelCell;
- (id)referkeyOfCurrentVidByVideodataListKey:(id)arg1;
- (long long)priorityOfCurrentPlayingVideoList;
- (id)currentLid;
- (id)currentCoverID;
- (void)updataUserInfoForModelWithIdentifier:(id)arg1 dataKey:(id)arg2 newData:(id)arg3 pageContext:(id)arg4 isAllData:(_Bool)arg5;
- (id)userInfoForModelWithDataKey:(id)arg1;
- (id)currentPlayingVid;
- (id)userInfoForModelWithIdentifier:(id)arg1 dataKey:(id)arg2;
- (void)updateDownloadState:(id)arg1;
- (int)getDownloadRight:(long long)arg1 isClickDownload:(long long)arg2;
- (id)getMovieActionObject;
- (void)getVideoDownLoadRightFromType:(long long)arg1 userClick:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadVipTipsInfo;
- (id)getCurrentVisibleCellByUserVipState;
- (void)findPositiveVideoListDataKeyWithOnaObj:(id)arg1;
- (void)headerPosterPlayClicked:(id)arg1;
- (void)detailPageNavibarDidClickPlayBtn:(id)arg1;
- (void)commentsClicked:(id)arg1;
- (id)generateMoiveItemForCurrentVideoFromTopMostNode;
- (void)doScrollToCommonCommentsCellWithAnimation:(_Bool)arg1;
- (void)commentClicked:(id)arg1 sendObj:(id)arg2;
- (void)enterDownloadController;
- (void)downloadClicked:(id)arg1;
- (id)downloadCidParam;
- (id)downloadVidParam;
- (int)currrentVideoCanBeDownLoad;
- (void)retryDown:(id)arg1;
- (id)targetViewControllerForJumpData:(id)arg1 jumpModel:(id)arg2;
- (id)targetViewControllerForJumpData:(id)arg1;
- (id)currentVideoList;
- (id)getShareItem;
- (id)getAttentItemForCurrentVideo;
- (id)currentVideoMainTitle;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (long long)headerDragRefreshStyle;
- (_Bool)hasHeaderDragRefresh;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissPresenter:(_Bool)arg1;
- (void)receiveToggleToFullScreen:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)isPotraitInterface;
- (_Bool)isCurrentPlayingVidInPageCacheData:(id)arg1;
- (void)tryToCacheDownloadPageBeforePopup;
- (id)getCachedKeysFilePath;
- (void)doSomethingBeforePopup;
- (void)jumpToDownloadControllerAccordingToH5;
- (void)detailPageNavibarDidClickBackBtn:(id)arg1;
- (_Bool)isCellVisiableInTableView:(id)arg1;
- (int)tcu_thumbBackgroundStyle;
- (id)tcu_currentPageViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)checkCellValid:(id)arg1 indexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateDynamicCell:(id)arg1;
- (void)refreshDynamicCellIfNeeded:(id)arg1;
- (void)playingIndexChanged:(id)arg1;
- (void)playerVideoInfoChanged:(id)arg1;
- (void)checkPresenterDisappearByVidChangeWithDataKey:(id)arg1;
- (void)flushPlayerReportParamsWithPlayListChange:(_Bool)arg1;
- (void)handleSwitchVideoWithIndex:(long long)arg1;
- (void)resetPlayerIgnore3G:(long long)arg1 withHistory:(_Bool)arg2;
- (void)forceResetPlayer:(long long)arg1 withHistory:(_Bool)arg2;
- (void)resetPlayerWithSubIndex:(long long)arg1;
- (void)resetPlayerWithSubIndex:(long long)arg1 isChangedPlaylist:(_Bool)arg2;
- (void)tryForceUpdateVideoList;
- (void)handleSwitchPlayerWithIndex:(long long)arg1 changeFlag:(_Bool)arg2;
- (void)openWebnetwork3GPromptWithConfirmBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (_Bool)payCanbePlayed;
- (_Bool)payCanbePlayedWithIndex:(long long)arg1;
- (void)showSmallPlayer;
- (void)resetIAPView;
- (void)opensourceURL:(id)arg1 index:(long long)arg2 withLocalPageId:(long long)arg3;
- (void)openSourcePlayWithWebURL:(id)arg1 index:(long long)arg2 withLocalPageId:(long long)arg3;
- (void)opensource:(id)arg1 withLocalPageId:(long long)arg2;
- (void)openSourcePlayWithWeb:(id)arg1 withLocalPageId:(long long)arg2;
- (void)changeSource:(long long)arg1;
- (void)playWithWebView;
- (void)handleOuterPlayWithUrl:(id)arg1 index:(long long)arg2;
- (void)clickGiftBtn;
- (id)arrayWithCurentRelyMarkScoreDesc;
- (id)arrayWithCurentRelyVideoList;
- (id)arrayWithVarietyRelyVideoList;
- (long long)payStateForCurrentVideoWithIndex:(unsigned long long)arg1;
- (void)updateTryWatchTimeWhenFullScreenSwitchVideoIndex:(long long)arg1;
- (void)showExperienceTips;
- (void)actionMenuDidDismissFromSuperView:(id)arg1;
- (void)action:(id)arg1 didShowMenuView:(id)arg2;
- (void)action:(id)arg1 didPressCaptionButton:(id)arg2;
- (void)action:(id)arg1 didPressReportButton:(id)arg2;
- (id)complaintAction;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
- (id)pathStrForRemark;
- (void)refreshShareButtonState;
- (_Bool)redirectShareData;
- (id)shareActionUrl;
- (id)sharePictureList;
- (id)shareMiniProgramInfo;
- (id)shareContentTail;
- (id)shareContent;
- (id)shareSingleTitle;
- (unsigned long long)shareStyle;
- (id)shareReportInfo;
- (id)shareVideoInfo;
- (unsigned long long)sharePlatformMask;
- (id)shareFromPage;
- (unsigned long long)shareDataType;
- (id)shareURL;
- (id)shareImage;
- (id)shareImageURL;
- (id)shareSubTitle;
- (id)shareTitle;
- (id)shareID;
- (_Bool)simplePlayCID:(id)arg1 title:(id)arg2 shareInfo:(id)arg3;
- (_Bool)simplePlayVID:(id)arg1 title:(id)arg2 shareInfo:(id)arg3;
- (void)playCometoEnd:(id)arg1;
- (void)playCometoEndAppendWorks;
- (void)addMiniPlayerView;
- (void)resetHeaderPlayerView;
- (id)getCurrentDMContentKey;
- (id)currentDataItem;
- (id)imgUrlForCurrentPlayingVideo;
- (void)configThirdPartyVideoTipView;
- (void)postIndexChangedNotification;
- (void)handleViewWhenAutoPlay;
- (double)prewatchDurationForVideo;
- (void)resetPlayer:(long long)arg1 withHistory:(_Bool)arg2;
- (_Bool)pageLoadFinished;
- (id)currentPageTableViewForReport;
- (_Bool)shouldReportShowUpCells;
- (_Bool)dataForShowUpIsOutDated;
- (_Bool)dataForShowUpIsFromCache;
- (_Bool)needToReportScrollEvent;
- (void)reportPageShowUp;
- (long long)preferredStatusBarStyle;
- (void)startSysScreenShot:(_Bool)arg1;
- (id)getCurrentLoadingConfig;
- (id)currentDatalist;
- (_Bool)fromDownloadPage;
- (_Bool)checkPagePlayerStatus;
- (void)leavePage;
- (void)enterPage;
- (void)enterBackground:(id)arg1;
- (void)enterForground:(id)arg1;
- (void)vipStateChangedRefreshDetail;
- (id)headerDefaultImageURL;
- (id)getPosterListDataByDataKey:(id)arg1;
- (void)refreshCurrentPage;
- (void)doSomethingAfterAuthAlert;
- (void)viewDidLoad;
- (void)flushWithMovieItem:(id)arg1;
- (void)refreshCurrentMovieItemWithDetailModel:(id)arg1;
- (void)notifyForOpenUrl;
- (void)doScrollviewDidEndScrolledOnece;
- (void)loadVidChangeModules;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)doPushSecendPage;
- (_Bool)offlineAuthTryPlayOfNetBroken;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidStartLoad:(id)arg1;
- (void)startPlayAllVideo;
- (void)loadData:(int)arg1;
- (_Bool)isJCEStyleUI;
- (_Bool)shouldHeaderViewFixed;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updatePaySeriesInfo;
- (_Bool)shouldAutoAuthorizeCheck;
- (_Bool)authRootPlayerCanBePlayed;
- (void)resumePlayerToStateWhenEnterIntoDetailPageIfNecessary;
- (void)pageScrollActionFromJumpModelParams;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setJumpData:(id)arg1;
- (void)updatePlayLists:(id)arg1;
- (id)getVideoListReportKeyWithDataKey:(id)arg1;
- (void)refreshHeaderNotifyState;
- (void)refreshPlayerPlayList;
- (void)updateDetailVideoList:(id)arg1;
- (void)bgImgViewSwipUp;
- (double)heightOfDetailsPresentedSubViewCtl;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)pageChineseName;
- (void)scrollFeedFlowToVisible;
- (_Bool)ifNeedFeedFlowModel;
- (void)loadFeedDataWithType:(long long)arg1;
- (void)momentDidLoginSuccess:(id)arg1;
- (void)needToUpdateListView:(id)arg1 momentComment:(id)arg2;
- (id)commentWillBegin:(id)arg1 momentComment:(id)arg2;
- (void)needToSeeMoreComment:(id)arg1 withItem:(id)arg2;
- (void)needToSynFeed:(id)arg1;
- (void)needToShowFollowAnimation:(id)arg1 withItem:(id)arg2;
- (void)needToUpdateAttentionState:(id)arg1 withItem:(id)arg2;
- (void)needToDeleteItem:(id)arg1 withItem:(id)arg2;
- (void)needToUpdateTextContentItem:(id)arg1 withItem:(id)arg2 needSetContentOffset:(_Bool)arg3;
- (void)needToUpdateItem:(id)arg1 withItem:(id)arg2;
- (void)needToUpdateCommentView:(id)arg1 withItem:(id)arg2;
- (void)needToUpdateLikeView:(id)arg1 withItem:(id)arg2;
- (id)commentWillBegin:(id)arg1 withItem:(id)arg2;
- (void)handlePutCommentFailed:(id)arg1;
- (void)handlePutCommentSucess:(id)arg1;
- (void)handleNewCommentIconURL:(id)arg1;
- (void)handleFeedNeedUpdate:(id)arg1;
- (void)handleNewMessage:(id)arg1;
- (void)handlePublishFailed:(id)arg1;
- (void)handlePictureFailed:(id)arg1;
- (void)handlePublishSucess:(id)arg1;
- (void)reloadMomentCell:(id)arg1 needSetContentOffset:(_Bool)arg2 animated:(_Bool)arg3;
- (void)momentWillPublishNotification:(id)arg1;
- (void)deleteMomentItemNotification:(id)arg1;
- (void)updateMomentNotification:(id)arg1;
- (void)mergeFakeItemToTimeLine;
- (void)deleteMomentCell:(id)arg1;
- (void)reloadMomentCell:(id)arg1;
- (void)updateMomentCell:(id)arg1;
- (id)itemWithClientKey:(id)arg1;
- (id)itemWithPublishId:(id)arg1;
- (id)indexPathWithObject:(id)arg1;
- (void)engineDidFailed:(id)arg1;
- (void)engineDidFinishLoad:(id)arg1;
- (_Bool)shouldShowComment;
- (_Bool)isHaveCommentObj;
- (void)delayLoadData:(id)arg1;
- (id)getTimelineModel;
- (void)loadTimeLineData:(_Bool)arg1;
- (void)removeKeyboardObservers;
- (void)addKeyboardObservers;
- (void)prepareForMoment;
- (void)cellLoaded:(id)arg1 inTableView:(id)arg2 index:(long long)arg3;
- (id)insertStreamAds:(id)arg1 inPostListData:(id)arg2 withDataKey:(id)arg3;
- (void)removeStreamAdsItemsWithType:(unsigned long long)arg1;
- (void)refreshStreamAdsItemsWithType:(unsigned long long)arg1;
- (void)refreshStreamAdsItemsWithModelCtl:(id)arg1;
- (id)getDataKeyWithMovieDetailStreamAdsType:(unsigned long long)arg1;
- (unsigned long long)getMovieDetailStreamAdsTypeWithDataKey:(id)arg1;
- (id)getStreamAdsPlaceHolderListWithDataKey:(id)arg1;
- (id)getDataKeyModelCtlWithDatakey:(id)arg1;
- (_Bool)shouldCloseClipLinkedAdBackgroundView;
- (_Bool)shouldShowedClipLinkedAdBackgroundView;
- (_Bool)isExitClipLinkedAds;
- (id)getClipLinkedAdBackgroundView;
- (double)getClipLinkedAdsViewHeight;
- (_Bool)isClipLinkedAdsPlaceHolderClassIsPromoteEntry;
- (_Bool)isExitClipLinkedAdsPlaceHolder;
- (_Bool)updateClipLinkedAdViewWithIsShow:(_Bool)arg1;
- (id)getMovieDetailAdsBusiness;
- (void)momentDidUpdateInfoNotification:(id)arg1;
- (_Bool)shouldShowHeaderViewBottomMarkLaberl;
- (void)sendStarCommentPublish:(id)arg1 photoes:(id)arg2 videos:(id)arg3 postTypeOption:(unsigned long long)arg4;
- (id)getStarCommentPublishInfo;
- (void)starCommentInputViewDidClickVoicePublishButton:(id)arg1;
- (id)getCurrentStarCommentKey;
- (id)generateVideoInfoTitle;
- (id)generateCurrentMomentPublish;
- (void)doScrollToStarCommentCell;
- (_Bool)shouldShowBtttomStarCommentView;
- (void)flushBottomStarCommentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) long long uiType;

@end

