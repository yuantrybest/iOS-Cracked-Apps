//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSelectedAppSectionProvider-Protocol.h"
#import "FBSelectedMenuItemTracking-Protocol.h"

@class FBAPISessionStore, FBAppModuleManager, FBExperimentManager, FBJewelController, FBKVOController, FBNavigationViewCoordinatorConfig, FBUserSession, NSArray, NSMapTable, NSMutableDictionary, NSNotificationCenter, NSOrderedSet, NSString;
@protocol FBAppSectionManagerAuxiliaryItemsDelegate, FBAppSectionManagerDelegate, FBMenuItem;

@interface FBAppSectionManager : NSObject <FBSelectedAppSectionProvider, FBSelectedMenuItemTracking>
{
    FBAppModuleManager *_appModuleManager;
    FBAPISessionStore *_apiSessionStore;
    FBExperimentManager *_experimentManager;
    NSNotificationCenter *_notificationCenter;
    FBNavigationViewCoordinatorConfig *_config;
    FBUserSession *_session;
    NSOrderedSet *_enabledAppSections;
    NSArray *_appSectionMenuItems;
    NSMutableDictionary *_viewControllerCache;
    NSMutableDictionary *_viewControllerAges;
    NSMapTable *_sectionMap;
    NSMapTable *_showMoreMap;
    NSMapTable *_headerMap;
    FBKVOController *_KVOController;
    NSArray *_auxiliaryItems;
    id <FBAppSectionManagerDelegate> _delegate;
    id <FBMenuItem> _selectedAppSection;
    id <FBMenuItem> _previouslySelectedAppSection;
    FBJewelController *_jewelController;
    id <FBAppSectionManagerAuxiliaryItemsDelegate> _auxiliaryItemsDelegate;
    NSArray *_auxiliarySections;
}

+ (void)setClearViewControllerCacheOnMemoryWarning;
@property(readonly, copy, nonatomic) NSArray *auxiliarySections; // @synthesize auxiliarySections=_auxiliarySections;
@property(nonatomic) __weak id <FBAppSectionManagerAuxiliaryItemsDelegate> auxiliaryItemsDelegate; // @synthesize auxiliaryItemsDelegate=_auxiliaryItemsDelegate;
@property(retain, nonatomic) FBJewelController *jewelController; // @synthesize jewelController=_jewelController;
@property(retain, nonatomic) id <FBMenuItem> previouslySelectedAppSection; // @synthesize previouslySelectedAppSection=_previouslySelectedAppSection;
@property(retain, nonatomic) id <FBMenuItem> selectedAppSection; // @synthesize selectedAppSection=_selectedAppSection;
@property(nonatomic) __weak id <FBAppSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isAuxiliaryItem:(id)arg1;
- (id)currentlySelectedAppSectionBookmarkID;
- (double)ageOfViewControllersForAppSection:(id)arg1;
- (void)setViewControllers:(id)arg1 forAppSection:(id)arg2;
- (id)viewControllersForAppSection:(id)arg1;
- (id)preferredAppSectionAfterSuccessfulPublishing;
@property(readonly, nonatomic) id <FBMenuItem> defaultAppSection;
- (void)setSelectedAppSection:(id)arg1 withAgeForPreviousAppSection:(id)arg2;
- (_Bool)isShowMoreAppSection:(id)arg1;
- (_Bool)isHeaderAppSection:(id)arg1;
- (id)actionsForAppSectionItem:(id)arg1;
- (void)expandSectionForItem:(id)arg1;
- (_Bool)canChangeSelectedAppSectionToSection:(id)arg1;
- (id)menuItemForAppSectionWithBookmarkID:(id)arg1;
- (id)appSectionIDs;
@property(readonly, copy, nonatomic) NSArray *menuItems;
- (void)setEnabledAppSections:(id)arg1;
- (id)appSectionMenuItems;
- (void)_c2cMarketplaceJewelCountChanged;
- (void)_videosJewelCountChanged;
- (void)_friendJewelCountChanged;
- (void)_updateNotificationJewelBadgeSpeak:(_Bool)arg1;
- (void)_notificationJewelCountChanged;
- (void)_bookmarkJewelCountChanged;
- (void)_messagesJewelCountChanged;
- (void)_speakChangeForJewel:(id)arg1 forCount:(id)arg2;
- (void)_observeJewelController:(id)arg1 eligibleAppSections:(id)arg2;
- (void)refreshAuxiliaryItems;
@property(readonly, copy, nonatomic) NSArray *auxiliaryItems; // @synthesize auxiliaryItems=_auxiliaryItems;
- (id)newMenuItemForAppSectionOrBookmarkID:(id)arg1;
- (void)dealloc;
- (id)initWithAppModuleManager:(id)arg1 apiSessionStore:(id)arg2 experimentManager:(id)arg3 notificationCenter:(id)arg4 config:(id)arg5 session:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

