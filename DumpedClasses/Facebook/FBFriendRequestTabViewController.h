//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentProvider-Protocol.h"
#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionEventListener-Protocol.h"
#import "FBForceTouchIntentProvider-Protocol.h"
#import "FBFriendConfirmedNotificationsDataSourceDelegate-Protocol.h"
#import "FBFriendingContactsFacepileLoaderDelegate-Protocol.h"
#import "FBFriendingPossibilitiesBufferedDataSourceDelegate-Protocol.h"
#import "FBNuxBannerControllerDelegate-Protocol.h"
#import "FBPYMKStreamListener-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "FBReachabilityListener-Protocol.h"
#import "FBScrolling-Protocol.h"
#import "FBSimpleNUXStep-Protocol.h"

@class FBComponentTableViewDataSource, FBFriendAcceptedNotificationExperimentContext, FBFriendConfirmedNotificationsDataSource, FBFriendConfirmedNotificationsUnseenCountDataSource, FBFriendRequestTabHowfoundContext, FBFriendRequestTabSectionManager, FBFriendRequestTabTableViewDataSourceHelper, FBFriendingContactsFacepileLoader, FBFriendingContactsSyncModel, FBFriendingPossibilitiesBufferedDataSource, FBFriendingPossibilitiesDataCoordinator, FBFriendingToolbox, FBJewelController, FBNuxPromotionContentAndFooterView, FBPopoverActionSheet, FBPullToRefreshView, FBTransientViewStateManager, FBUserSession, NSIndexPath, NSMutableDictionary, NSMutableSet, NSObject, NSString, UIBarButtonItem, UITableView;
@protocol CKComponentSizeRangeProviding, FBCancelable, FBNuxBannerViewController, FBPYMKStreamProtocol, FBSimpleNUXStepViewControlling;

@interface FBFriendRequestTabViewController : UIViewController <CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBComponentScrollEventListener, FBPYMKStreamListener, FBFriendingPossibilitiesBufferedDataSourceDelegate, FBPullToRefreshViewDelegate, FBNuxBannerControllerDelegate, FBFriendingContactsFacepileLoaderDelegate, FBReachabilityListener, FBComponentCellAppearanceEventListener, FBAccessibilityInvalidationEventsListener, FBFriendConfirmedNotificationsDataSourceDelegate, FBForceTouchIntentProvider, FBSimpleNUXStep, FBScrolling>
{
    FBUserSession *_session;
    FBFriendRequestTabHowfoundContext *_howfoundContext;
    NSString *_pymkLocation;
    FBFriendRequestTabSectionManager *_sectionManager;
    FBComponentTableViewDataSource *_dataSource;
    FBFriendRequestTabTableViewDataSourceHelper *_dataSourceHelper;
    id <CKComponentSizeRangeProviding> _constraintProvider;
    FBFriendingPossibilitiesDataCoordinator *_friendingDataCoordinator;
    FBFriendingPossibilitiesBufferedDataSource *_friendingBufferedDataSource;
    NSObject<FBPYMKStreamProtocol> *_pymkStream;
    FBFriendingToolbox *_toolbox;
    NSObject *_scenePath;
    id <FBCancelable> _cancelableClearUnseenToken;
    UITableView *_tableView;
    FBPullToRefreshView *_pullToRefreshView;
    FBNuxPromotionContentAndFooterView *_containerView;
    UIViewController<FBNuxBannerViewController> *_bannerViewController;
    _Bool _isPTRLoadingFriendingPossibilities;
    _Bool _isPTRLoadingPYMK;
    _Bool _isInView;
    _Bool _tableViewLayoutFinished;
    _Bool _shouldTruncateVscrollPYMK;
    _Bool _poppedQPForFriendingActions;
    _Bool _displayingQPForCI;
    FBFriendingContactsFacepileLoader *_contactsFacepileLoader;
    FBFriendingContactsSyncModel *_contactsSyncFacepileModel;
    unsigned long long _reachabilityState;
    FBPopoverActionSheet *_popoverActionSheet;
    FBTransientViewStateManager *_viewStateManager;
    _Bool _friendingPossibilitiesFinishLoading;
    _Bool _PYMKFinishedLoading;
    _Bool _usesCardDesign;
    _Bool _isPopoverOrModal;
    _Bool _disableContactSyncEntryPoint;
    _Bool _vscrollPYMKTruncatedEnabled;
    UIBarButtonItem *_doneButton;
    FBFriendConfirmedNotificationsDataSource *_friendConfirmedNotificationsDataSource;
    FBFriendConfirmedNotificationsUnseenCountDataSource *_friendConfirmedNotificationsUnseenCountDataSource;
    _Bool _acceptedNotifcaitonEnabled;
    double _lastTimePYMKWereFetched;
    _Bool _hasPerformedPYMKFriendingActions;
    NSIndexPath *_smallestSeenIndexPath;
    NSIndexPath *_largestSeenIndexPath;
    FBFriendAcceptedNotificationExperimentContext *_acceptNotifsContext;
    NSMutableDictionary *_pymkSuggestionsToLog;
    NSMutableSet *_pymkSuggestionIdsLogged;
    NSMutableDictionary *_pymkSuggestionTimestampsForEntityCard;
    NSMutableSet *_pymkSuggestionIdsToLogForEntityCard;
    _Bool _navigatedToProfile;
    id <FBSimpleNUXStepViewControlling> _nuxController;
    FBJewelController *_jewelController;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(nonatomic) FBJewelController *jewelController; // @synthesize jewelController=_jewelController;
@property(nonatomic) id <FBSimpleNUXStepViewControlling> nuxController; // @synthesize nuxController=_nuxController;
- (void).cxx_destruct;
- (void)_recordPYMKImpressionLoggedForEntityCardWithPerson:(id)arg1;
- (void)_clearAndLogPYMKImpressionForEntityCard;
- (void)_logPYMKImpressionForEntityCard;
- (void)_saveEntityCardDownloadedPageDataWithEntities:(id)arg1;
- (void)_clearAndLogPYMKImpression;
- (void)_logPYMKImpression;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (id)largestSeenIndexPath;
- (id)smallestSeenIndexPath;
- (void)setUpUnitTestTableView:(id)arg1 sectionManager:(id)arg2 andDataSourceHelper:(id)arg3;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (unsigned long long)preferredPresentationOptions;
- (void)nuxBannerControllerDidDismissBanner:(id)arg1;
- (void)_setBannerViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_sendOutJewelClearRequest;
- (void)_clearUnseen;
- (void)scheduleMarkAllRequestsAsSeen;
- (void)_dismissView:(id)arg1;
- (void)_openEmptyViewFindFriends:(id)arg1;
- (void)_openFriendCenter:(id)arg1;
- (void)_addFriendCenterLink;
- (void)_configureNavigationBar;
- (void)_handleFriendingActions;
- (void)_handlePYMKSendRequestAction:(id)arg1 person:(id)arg2;
- (void)_didTapPYMKXout:(id)arg1 person:(id)arg2;
- (void)_loadMoreFriendingPossibilitiesCompletedWithEdges:(id)arg1;
- (void)_loadMoreFriendingPossibilities:(unsigned long long)arg1;
- (void)_loadInitFriendingPossibilitiesCompletedWithEdges:(id)arg1;
- (void)_loadInitFriendingPossibilities;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)_logAndClearSeenRange;
- (void)_resetSeenRange;
- (void)_updateSeenRange;
- (id)analyticsModule;
- (void)didReceiveAccessibilityInvalidation;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (id)forceTouchIntentAtPoint:(struct CGPoint)arg1 sourceView:(id)arg2;
- (void)_openContactImporter;
- (void)didTapSeeAllPYMKCell;
- (void)didTapSeeMoreFriendRequestsCell;
- (_Bool)_presentEntityCardsForPYMKAtSelectedIndex:(unsigned long long)arg1;
- (_Bool)_presentEntityCardsForFriendRequestsAtSelectedIndex:(unsigned long long)arg1;
- (void)_navigateToConfirmedNotificationTableView:(id)arg1;
- (void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_insertContactsSyncSection;
- (void)contactsFacepileLoader:(id)arg1 didLoadModel:(id)arg2;
- (void)_undoTruncateVscrollPYMK;
- (void)_truncateVscrollPYMK;
- (void)PYMKStream:(id)arg1 didRemoveSuggestion:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)PYMKStream:(id)arg1 didUpdateSuggestion:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)PYMKStream:(id)arg1 didFailLoadingWithError:(id)arg2 andCurrentSuggestions:(id)arg3;
- (void)PYMKStream:(id)arg1 didFinishedLoadingSuggestions:(id)arg2 andNumberOfNew:(unsigned long long)arg3;
- (void)didFinishLoadingWithError:(id)arg1 andCurrentLoadedConfirmedNotificationsFriends:(id)arg2;
- (void)didFinishLoadingConfirmedNotificationsFriends:(id)arg1;
- (void)friendingPossibilitiesDidChangeTotalCount:(long long)arg1 andUnseenCount:(long long)arg2;
- (void)friendingPossibilitiesBufferedDataSource:(id)arg1 didUpdateEdges:(id)arg2 isReloading:(_Bool)arg3;
- (void)friendingPossibilitiesBufferedDataSource:(id)arg1 didRemoveEdges:(id)arg2 isReloading:(_Bool)arg3;
- (void)friendingPossibilitiesBufferedDataSource:(id)arg1 didInsertEdgesAtTail:(id)arg2;
- (void)friendingPossibilitiesBufferedDataSource:(id)arg1 didInsertEdgesAtHead:(id)arg2;
- (void)friendingPossibilitiesBufferedDataSourceDidFinishReloading:(id)arg1;
- (void)_reloadDataWithReason:(long long)arg1;
- (void)_reloadDataByManualRetryInError:(id)arg1;
- (void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;
- (void)pullToRefreshView:(id)arg1 didChangeVisibility:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
- (void)pullToRefreshViewDidAttemptToTriggerRefresh:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_updateViewState;
- (_Bool)fb_showNavBarSearchField;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)_createNewPYMKStream;
- (void)resetPYMKStream;
- (void)_didEnterBackground;
- (void)dealloc;
- (id)initWithSession:(id)arg1 howfoundContext:(id)arg2 pymkLocation:(id)arg3 usesCardDesign:(_Bool)arg4 isPopoverOrModal:(_Bool)arg5 disableContactSyncEntryPoint:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

