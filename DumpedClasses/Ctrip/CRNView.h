//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTRootView.h"

#import "RCTBridgeDelegate.h"

@class CRNURL, NSString, RCTBridge;

@interface CRNView : RCTRootView <RCTBridgeDelegate>
{
    id <CRNViewDelegate> _viewDelegate;
    CRNURL *_url;
    RCTBridge *_currentBridge;
}

+ (id)initialPropertiesWithURLString:(id)arg1;
@property(retain, nonatomic) RCTBridge *currentBridge; // @synthesize currentBridge=_currentBridge;
@property(retain, nonatomic) CRNURL *url; // @synthesize url=_url;
@property(nonatomic) id <CRNViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (void)bridgeExecuteError:(id)arg1;
- (void)bridgeReload:(id)arg1;
- (void)bundleDidTTI:(id)arg1;
- (void)bundleJSDidExecuted:(id)arg1;
- (void)bundleBridgeDidCreated:(id)arg1;
- (void)bundleJSDidLoad:(id)arg1;
- (void)loadSourceForBridge:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)sourceURLForBridge:(id)arg1;
- (id)initWithURL:(id)arg1 initialProperties:(id)arg2 launchOptions:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

