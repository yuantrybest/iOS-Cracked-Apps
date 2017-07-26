//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBNXViewControllerDelegate.h"

@class NSString, TBNXViewController, TBSearchOnesearchNXConfigManager, TBSearchWebViewManager;

@interface TBXSearchNXConfigViewController : TBViewController <TBNXViewControllerDelegate>
{
    NSString *_url;
    TBSearchOnesearchNXConfigManager *_onesearchNXConfigManager;
    TBSearchWebViewManager *_webviewManager;
    TBNXViewController *_nxVc;
}

@property(retain, nonatomic) TBNXViewController *nxVc; // @synthesize nxVc=_nxVc;
@property(retain, nonatomic) TBSearchWebViewManager *webviewManager; // @synthesize webviewManager=_webviewManager;
@property(retain, nonatomic) TBSearchOnesearchNXConfigManager *onesearchNXConfigManager; // @synthesize onesearchNXConfigManager=_onesearchNXConfigManager;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)showChiTuLogoWhenReady;
- (void)chiTuRun;
- (void)viewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setFestivalNavibar;
- (_Bool)tbfestival_isFestivalEnable;
- (void)layoutResultViewWithMode:(unsigned long long)arg1;
- (void)clearResultComponent;
- (void)loadResultComponentWithMode:(unsigned long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
