//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GADIntermitting-Protocol.h"

@class GADIntermission, GADSlot, NSString;
@protocol GADOverlayPresenting;

@interface GADViewController : UIViewController <GADIntermitting>
{
    id _appForegroundObserver;
    BOOL _viewDidAppear;
    GADIntermission *_intermission;
    unsigned int _supportedInterfaceOrientations;
    GADSlot *_slot;
    GADViewController *_retainCycle;
    id <GADOverlayPresenting> _presenter;
    CDUnknownBlockType _dismissalCompletion;
}

@property(nonatomic) BOOL viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(retain, nonatomic) id <GADOverlayPresenting> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) GADViewController *retainCycle; // @synthesize retainCycle=_retainCycle;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) unsigned int supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(readonly, nonatomic) GADIntermission *intermission; // @synthesize intermission=_intermission;
- (void).cxx_destruct;
- (void)recordDismissal;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldDismissOnApplicationEnteringForeground;
- (void)viewChangedToOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)finishDismissal;
- (void)finishAppearing;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)addToCurrentIntermission;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSupportedOrientations:(unsigned int)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

