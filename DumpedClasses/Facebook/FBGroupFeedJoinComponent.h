//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBGroupFeedActionHandler, FBGroupFeedCollectionStickyFooterListenerAnnouncer, FBMemGroup, FBUserSession;
@protocol FBNavigationCoordinator;

@interface FBGroupFeedJoinComponent : CKCompositeComponent
{
    FBGroupFeedActionHandler *_actionHandler;
    FBUserSession *_session;
    _Bool _isInvitedExperience;
    id <FBNavigationCoordinator> _navigationCoordinator;
    _Bool _shouldAnnounceWorkingRanges;
    FBGroupFeedCollectionStickyFooterListenerAnnouncer *_stickyFooterListenerAnnouncer;
    FBMemGroup *_group;
}

+ (id)newWithModel:(id)arg1 toolbox:(id)arg2 options:(const struct FBGroupFeedJoinComponentOptions *)arg3;
@property(readonly, nonatomic) FBMemGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) FBGroupFeedCollectionStickyFooterListenerAnnouncer *stickyFooterListenerAnnouncer; // @synthesize stickyFooterListenerAnnouncer=_stickyFooterListenerAnnouncer;
@property(readonly, nonatomic) _Bool shouldAnnounceWorkingRanges; // @synthesize shouldAnnounceWorkingRanges=_shouldAnnounceWorkingRanges;
- (void).cxx_destruct;
- (void)handleDeclineInviteTap:(id)arg1;
- (void)handleCancelJoinTap:(id)arg1;
- (void)handleJoinTap:(id)arg1;

@end
