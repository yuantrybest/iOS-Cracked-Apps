//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "UIActionSheetDelegate.h"

@class ATCLanLanSubaruReportMenuItem, NSMutableArray, NSString, UIButton;

@interface ATCLanLanSubaruReportMenuService : NSObject <UIActionSheetDelegate, CAAnimationDelegate>
{
    _Bool _useDislike;
    _Bool _display;
    _Bool _displayDislikeGuideView;
    _Bool _animationCompleted;
    id <ATCLanLanSubaruReportMenuDelegate> _delegate;
    NSString *_contentId;
    NSString *_trackInfo;
    UIButton *_reportMenuView;
    UIButton *_unlikeButton;
    NSMutableArray *_menuList;
    NSMutableArray *_currentMenuList;
    ATCLanLanSubaruReportMenuItem *_dislikeItem;
    NSString *_dislikeName;
    NSString *_dislikeType;
    UIButton *_dislikeGuideView;
}

+ (id)shareInstance;
@property(nonatomic) _Bool animationCompleted; // @synthesize animationCompleted=_animationCompleted;
@property(nonatomic) _Bool displayDislikeGuideView; // @synthesize displayDislikeGuideView=_displayDislikeGuideView;
@property(retain, nonatomic) UIButton *dislikeGuideView; // @synthesize dislikeGuideView=_dislikeGuideView;
@property(copy, nonatomic) NSString *dislikeType; // @synthesize dislikeType=_dislikeType;
@property(copy, nonatomic) NSString *dislikeName; // @synthesize dislikeName=_dislikeName;
@property(retain, nonatomic) ATCLanLanSubaruReportMenuItem *dislikeItem; // @synthesize dislikeItem=_dislikeItem;
@property(retain, nonatomic) NSMutableArray *currentMenuList; // @synthesize currentMenuList=_currentMenuList;
@property(retain, nonatomic) NSMutableArray *menuList; // @synthesize menuList=_menuList;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(retain, nonatomic) UIButton *unlikeButton; // @synthesize unlikeButton=_unlikeButton;
@property(retain, nonatomic) UIButton *reportMenuView; // @synthesize reportMenuView=_reportMenuView;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) __weak id <ATCLanLanSubaruReportMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useDislike; // @synthesize useDislike=_useDislike;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)hideDislikeGuideView;
- (void)showDislikeGuideViewInView:(id)arg1;
- (void)handleSubaruDislikeWithRequest:(id)arg1 error:(id)arg2 contentId:(id)arg3 trackInfo:(id)arg4 actionType:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailed:(CDUnknownBlockType)arg7;
- (void)submitSubaruDislikeWith:(id)arg1 trackInfo:(id)arg2 actionType:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onFailed:(CDUnknownBlockType)arg5;
- (void)handleSubaruReportActionhWithRequest:(id)arg1 error:(id)arg2 contentId:(id)arg3 actionType:(id)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailed:(CDUnknownBlockType)arg6;
- (void)submitSubaruReportActionWith:(id)arg1 actionType:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)handleSubaruReportMenuWithRequest:(id)arg1 error:(id)arg2;
- (void)getSubaruReportMenu;
- (_Bool)isValidLogin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSubaruReportMenuActionSheetInView:(id)arg1 contentId:(id)arg2;
- (void)hiddenReportMenuView;
- (void)handleHiddeReportMenuViewNotification:(id)arg1;
- (void)showSubaruReportMenuInView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3;
- (void)showSubaruReportMenuInItemView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3 showDislike:(_Bool)arg4;
- (void)showSubaruReportMenuInItemView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3 showDislike:(_Bool)arg4 menuType:(int)arg5;
- (void)showSubaruReportMenuInItemView:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3;
- (void)showSubaruReportMenuInMiniDetailWindow:(id)arg1 contentId:(id)arg2 trackInfo:(id)arg3;
- (void)clickedMenuItemAtIndex:(unsigned long long)arg1;
- (void)clickBackGroundButton:(id)arg1;
- (void)clickReportMenuItem:(id)arg1;
- (void)userLoggedOut:(id)arg1;
- (void)userLoggedIn:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

