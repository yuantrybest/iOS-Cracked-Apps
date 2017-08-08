//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCommentComposerBannerProviding-Protocol.h"
#import "FBCommentStreamDimmable-Protocol.h"
#import "FBCommentStreamViewControllerActionsProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class FBAnalyticsReferrerPerformanceLogger, FBCommentStreamComponentContext, FBCommentStreamKeyboardAwareInsetManager, FBCommentStreamViewController, FBNavigationBarSearchTextTitleContext, FBSearchContext, NSDictionary, NSString;
@protocol CKComponentSizeRangeProviding, FBCommentStreamChildSource, FBFeedbackTargetManagerDelegate, FBFeedbackTargetProtocol, NSObject;

@protocol FBFeedbackTargetManagerProtocol <NSObject, FBCommentComposerBannerProviding, FBCommentStreamViewControllerActionsProtocol, FBCommentStreamDimmable>
@property(nonatomic) __weak FBCommentStreamViewController<FBFeedbackTargetManagerDelegate> *delegate;
@property(readonly, nonatomic) id <FBFeedbackTargetProtocol> feedbackTarget;
- (void)loadFeedbackTargetIfNeeded;

@optional
@property(copy, nonatomic) NSString *additionalTrackingCode;
@property(retain, nonatomic) FBAnalyticsReferrerPerformanceLogger *referrerPerformanceLogger;
@property(readonly, nonatomic) Class componentProvider;
@property(readonly, nonatomic) id <CKComponentSizeRangeProviding> componentConstraintProvider;
@property(readonly, nonatomic) id <FBCommentStreamChildSource> footerSource;
@property(readonly, nonatomic) id <FBCommentStreamChildSource> source;
- (FBNavigationBarSearchTextTitleContext *)commentStreamSearchTitleContext;
- (FBSearchContext *)commentStreamSearchContext;
- (double)commentStreamNavigationSearchBarRightOffset;
- (NSDictionary *)analyticsExtras;
- (id <NSObject>)componentContextWithCommentStreamContext:(FBCommentStreamComponentContext *)arg1 activateCommentComposerAction:(CKTypedComponentAction_4b39899e)arg2 insetManager:(FBCommentStreamKeyboardAwareInsetManager *)arg3;
- (void)refreshFeedbackTarget;
@end
