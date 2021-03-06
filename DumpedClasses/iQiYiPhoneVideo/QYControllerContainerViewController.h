//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYBaseViewController.h"

@class QYCommonViewController, QYNoOverFlowStack;

@interface QYControllerContainerViewController : QYBaseViewController
{
    unsigned long long _stackCount;
    QYNoOverFlowStack *_stack;
    QYCommonViewController *_topController;
    QYCommonViewController *_secondController;
}

@property(retain, nonatomic) QYCommonViewController *secondController; // @synthesize secondController=_secondController;
@property(retain, nonatomic) QYCommonViewController *topController; // @synthesize topController=_topController;
@property(retain, nonatomic) QYNoOverFlowStack *stack; // @synthesize stack=_stack;
@property(nonatomic) unsigned long long stackCount; // @synthesize stackCount=_stackCount;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)removeFromParentViewController;
- (void)toBack;
- (void)insertSecondController:(id)arg1;
- (void)childViewControllerWillBeRemoved:(id)arg1;
- (void)childViewControllerWillBeDismissed:(id)arg1;
- (void)showChild:(id)arg1 withData:(id)arg2;
- (void)openPlayer;
- (void)enterPaopao:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

