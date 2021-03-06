//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ContactCellDelegate-Protocol.h"
#import "FBAuxiliaryViewController-Protocol.h"
#import "FBContactsSearchDelegate-Protocol.h"
#import "FBMChatBarNearbyFriendsMiniphoneDelegate-Protocol.h"
#import "FBMProfileInfoFetcherDelegate-Protocol.h"
#import "FBMessengerChatBarSectionTitleViewDelegate-Protocol.h"
#import "FBMessengerChatSideBarViewDelegate-Protocol.h"
#import "FBMessengerEditFavoritesDelegate-Protocol.h"
#import "FBMessengerInterstitialViewDelegate-Protocol.h"
#import "FBOnlineFriendsSearchDelegate-Protocol.h"
#import "FBPassthroughOverlayViewDelegate-Protocol.h"
#import "FBPopoverControllerDelegate-Protocol.h"
#import "FBViewerContextClassProvidable-Protocol.h"
#import "MNOnlineStatusListener-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ContactCellFactory, FBAnimationPerformanceLogger, FBCombinedContactsSearch, FBFNWaveDataController, FBLoadingView, FBMChatBarNearbyFriendsMiniphoneController, FBMChatBarNearbyFriendsSectionDataController, FBMChatContextManager, FBMProfileInfoFetcher, FBMessengerChatBarKeyboardShortcut, FBMessengerChatBarMegaphoneManager, FBMessengerChatFavoriteManager, FBMessengerChatSideBarView, FBMessengerInterstitialController, FBMessengerInterstitialView, FBMessengerSyncEngineManager, FBOnlineFriendsSearch, FBPassthroughOverlayView, FBPopoverActionSheet, FBProfileItem, FBSyncStore, FBTransientViewStateManager, FBUserDefaultsCache, FBUserSession, LastActiveManager, MNOnlineStatusManager, NSArray, NSMutableArray, NSNotificationCenter, NSString, UIApplication;
@protocol FBMessengerChatBarViewControllerDelegate, FBProvider;

@interface FBMessengerChatBarViewController : UIViewController <UISearchBarDelegate, FBOnlineFriendsSearchDelegate, FBMessengerChatBarSectionTitleViewDelegate, FBMessengerEditFavoritesDelegate, FBContactsSearchDelegate, FBMessengerInterstitialViewDelegate, FBMessengerChatSideBarViewDelegate, FBPopoverControllerDelegate, MNOnlineStatusListener, FBMChatBarNearbyFriendsMiniphoneDelegate, FBMProfileInfoFetcherDelegate, ContactCellDelegate, FBViewerContextClassProvidable, FBAuxiliaryViewController, FBPassthroughOverlayViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    int _style;
    FBLoadingView *_loadingView;
    FBOnlineFriendsSearch *_onlineFriendsSearch;
    FBCombinedContactsSearch *_contactsSearch;
    MNOnlineStatusManager *_onlineStatusManager;
    _Bool _online;
    _Bool _visible;
    FBUserDefaultsCache *_userDefaultsCache;
    UIApplication *_application;
    NSNotificationCenter *_notificationCenter;
    _Bool _prefetching;
    FBPopoverActionSheet *_gearButtonActionSheet;
    FBPassthroughOverlayView *_passthroughOverlayView;
    NSMutableArray *_queryStrings;
    NSString *_uuid;
    int _searchAttempts;
    _Bool _initialized;
    _Bool _viewsShownAfterInitialization;
    FBAnimationPerformanceLogger *_apTracker;
    FBMessengerSyncEngineManager *_syncEngineManager;
    ContactCellFactory *_contactCellFactory;
    FBMessengerChatBarKeyboardShortcut *_chatKeyboardShortcuts;
    long long _lastAnnouncedNumberOfFriends;
    long long _lastAnnouncedNumberOfOtherPeople;
    long long _lastAnnouncedNumberOfGroups;
    long long _lastAnnouncedNumberOfCoworkers;
    FBMessengerInterstitialController *_interstitialController;
    id <FBProvider> _interstitialViewProvider;
    FBMChatBarNearbyFriendsSectionDataController *_nearbyFriendsSectionDatacontroller;
    FBFNWaveDataController *_waveDataController;
    _Bool _ready;
    _Bool _showNewMessageButton;
    _Bool _isObservingViewNotifications;
    _Bool _isSelfProfileEnabled;
    double _leftOffsetForRevealAnimation;
    FBMessengerChatBarMegaphoneManager *_megaphoneManager;
    FBMChatBarNearbyFriendsMiniphoneController *_nearbyFriendsMiniphoneController;
    id <FBMessengerChatBarViewControllerDelegate> _delegate;
    FBMessengerChatSideBarView *_chatSideBarView;
    NSArray *_favoriteFriends;
    NSArray *_filteredTopFriends;
    NSArray *_filteredOnlineFriends;
    NSArray *_filteredMobileFriends;
    NSArray *_unfilteredTopFriends;
    NSArray *_topGroups;
    NSArray *_unfilteredOnlineFriends;
    NSArray *_unfilteredMobileFriends;
    LastActiveManager *_lastActiveManager;
    id <FBProvider> _favControllerProvider;
    FBMessengerChatFavoriteManager *_favoriteManager;
    FBUserSession *_session;
    FBMChatContextManager *_chatContextManager;
    FBSyncStore *_syncStore;
    FBTransientViewStateManager *_viewStateManager;
    FBMessengerInterstitialView *_interstitialView;
    id <FBProvider> _messengerPromotionPropertiesProvider;
    FBProfileItem *_myProfileItem;
    FBMProfileInfoFetcher *_profileInfoFetcher;
}

@property(nonatomic) _Bool isSelfProfileEnabled; // @synthesize isSelfProfileEnabled=_isSelfProfileEnabled;
@property(retain, nonatomic) FBMProfileInfoFetcher *profileInfoFetcher; // @synthesize profileInfoFetcher=_profileInfoFetcher;
@property(retain, nonatomic) FBProfileItem *myProfileItem; // @synthesize myProfileItem=_myProfileItem;
@property(retain, nonatomic) id <FBProvider> messengerPromotionPropertiesProvider; // @synthesize messengerPromotionPropertiesProvider=_messengerPromotionPropertiesProvider;
@property(retain, nonatomic) FBMessengerInterstitialView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(nonatomic) _Bool isObservingViewNotifications; // @synthesize isObservingViewNotifications=_isObservingViewNotifications;
@property(retain, nonatomic) FBTransientViewStateManager *viewStateManager; // @synthesize viewStateManager=_viewStateManager;
@property(retain, nonatomic) FBSyncStore *syncStore; // @synthesize syncStore=_syncStore;
@property(retain, nonatomic) FBMChatContextManager *chatContextManager; // @synthesize chatContextManager=_chatContextManager;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBPopoverActionSheet *gearButtonActionSheet; // @synthesize gearButtonActionSheet=_gearButtonActionSheet;
@property(retain, nonatomic) FBMessengerChatFavoriteManager *favoriteManager; // @synthesize favoriteManager=_favoriteManager;
@property(retain, nonatomic) id <FBProvider> favControllerProvider; // @synthesize favControllerProvider=_favControllerProvider;
@property(retain, nonatomic) LastActiveManager *lastActiveManager; // @synthesize lastActiveManager=_lastActiveManager;
@property(copy, nonatomic) NSArray *unfilteredMobileFriends; // @synthesize unfilteredMobileFriends=_unfilteredMobileFriends;
@property(copy, nonatomic) NSArray *unfilteredOnlineFriends; // @synthesize unfilteredOnlineFriends=_unfilteredOnlineFriends;
@property(copy, nonatomic) NSArray *topGroups; // @synthesize topGroups=_topGroups;
@property(copy, nonatomic) NSArray *unfilteredTopFriends; // @synthesize unfilteredTopFriends=_unfilteredTopFriends;
@property(copy, nonatomic) NSArray *filteredMobileFriends; // @synthesize filteredMobileFriends=_filteredMobileFriends;
@property(copy, nonatomic) NSArray *filteredOnlineFriends; // @synthesize filteredOnlineFriends=_filteredOnlineFriends;
@property(copy, nonatomic) NSArray *filteredTopFriends; // @synthesize filteredTopFriends=_filteredTopFriends;
@property(copy, nonatomic) NSArray *favoriteFriends; // @synthesize favoriteFriends=_favoriteFriends;
@property(retain, nonatomic) FBMessengerChatSideBarView *chatSideBarView; // @synthesize chatSideBarView=_chatSideBarView;
@property(nonatomic) id <FBMessengerChatBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBMChatBarNearbyFriendsMiniphoneController *nearbyFriendsMiniphoneController; // @synthesize nearbyFriendsMiniphoneController=_nearbyFriendsMiniphoneController;
@property(readonly, nonatomic) FBMessengerChatBarMegaphoneManager *megaphoneManager; // @synthesize megaphoneManager=_megaphoneManager;
@property(nonatomic) _Bool showNewMessageButton; // @synthesize showNewMessageButton=_showNewMessageButton;
@property(nonatomic) double leftOffsetForRevealAnimation; // @synthesize leftOffsetForRevealAnimation=_leftOffsetForRevealAnimation;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
- (void).cxx_destruct;
- (void)_updateWaveStatusWithHasReceivedWaveFromViewer:(_Bool)arg1 contactCell:(id)arg2 syncPerson:(id)arg3;
- (void)_cancelWaveWithSyncPerson:(id)arg1 cell:(id)arg2;
- (void)_sendWaveWithSyncPerson:(id)arg1 cell:(id)arg2;
- (void)didTapWaveButtonWithSyncPerson:(id)arg1 cell:(id)arg2;
- (_Bool)_considerSearchActive;
- (_Bool)_shouldShowChatBarView;
- (void)openNearbyFriendsDashboard;
- (void)_markInitialized;
- (void)profileInfoFetcher:(id)arg1 didFailFetchWithError:(id)arg2;
- (void)profileInfoFetcher:(id)arg1 didFetchProfileItem:(id)arg2;
- (void)_performOneTimeSetupAfterInitialization;
- (void)passthroughOverlayViewDidReceiveTouch;
- (id)analyticsModule;
- (void)changedOnlineStatus:(_Bool)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_chatExpandCollapseButtonItemClicked;
- (void)_chatToggleButtonItemClicked;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2;
- (void)_changeOnlineState;
- (void)didPickResult:(id)arg1;
- (_Bool)shouldHideResult:(id)arg1;
- (void)didFinishSearch:(id)arg1;
- (void)search;
- (void)_dismissGearButtonActionSheetAnimated:(_Bool)arg1;
- (void)_endSearch;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)shouldForceFetchForPresenceUpdateNotification;
- (void)didFinishOnlineFriendsSearch;
- (void)_updateNearbyFriendsMiniphoneController;
- (id)_createExtraForPresenceInfoLogWithFriendLists:(id)arg1;
- (void)_countAndLogPresenceInfo;
- (void)_filterFriendSections;
- (void)_filterFavoriteFriendsFromSections;
- (id)_sectionIndexToTapPoint:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_searchResultSelectedAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateContactCell:(id)arg1 syncPerson:(id)arg2;
- (void)updateContactCellForNearbySection:(id)arg1 atIndexPath:(id)arg2;
- (void)updateContactCellForMobileFriendsSection:(id)arg1 atIndexPath:(id)arg2;
- (void)updateContactCellForOnlineFriendsSection:(id)arg1 atIndexPath:(id)arg2;
- (id)getContactCellForTableView:(id)arg1 withIdentifier:(id)arg2 colorScheme:(int)arg3;
- (id)genericContactCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 profileCellForIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_hasFavoritesDividerCell;
- (void)chatSideBarView:(id)arg1 didPressGearButton:(id)arg2;
- (id)_chatExpandCollapseItemTitle;
- (void)_endSearchIfTextBoxEmpty;
- (void)_openCurrentChatWithUserId:(id)arg1;
- (void)_updateOnlineFriendsSearch;
- (void)reloadChatContext;
- (void)reloadMiniphones;
- (void)prefetchFriends;
- (id)_sectionTitleViewWithString:(id)arg1 image:(id)arg2 inTable:(id)arg3 showDivider:(_Bool)arg4;
- (void)_updateSearchBarEnabled:(_Bool)arg1;
- (void)_updateOnlineStatus;
- (void)_updateUIForCurrentOnlineStatusAnimated:(_Bool)arg1 dismissGearButtonActionSheet:(_Bool)arg2;
- (_Bool)_isViewCurrentlyVisible;
- (_Bool)_isCollapsed;
- (void)_navigateToURL:(id)arg1;
- (void)interstitialViewSelectRedirect:(id)arg1;
- (void)interstitialViewSelectInstall:(id)arg1;
- (void)interstitialViewSelectLearnMore:(id)arg1;
- (void)editFavoritesDidTapDismiss:(id)arg1;
- (void)didTapEdit:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadMegaphone;
- (void)_updateViewsIfVisible;
- (void)_reloadTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_cleanupViews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (int)_contactCellColorSchemeForCurrentStyle;
- (void)dealloc;
- (id)initWithContactsSearch:(id)arg1 onlineStatusManager:(id)arg2 lastActiveManager:(id)arg3 userDefaultsCache:(id)arg4 application:(id)arg5 notificationCenter:(id)arg6 favControllerProvider:(id)arg7 favoriteManager:(id)arg8 interstitialViewProvider:(id)arg9 interstitialController:(id)arg10 userSession:(id)arg11 chatContextManager:(id)arg12 nearbyFriendsMiniphoneController:(id)arg13 style:(int)arg14 syncStore:(id)arg15 viewStateManager:(id)arg16 syncEngineManager:(id)arg17 contactCellFactory:(id)arg18 promotionPropertiesProvider:(id)arg19 diodeServiceDelayer:(id)arg20;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double rightOffsetForRevealAnimation;
@property(readonly) Class superclass;

@end

