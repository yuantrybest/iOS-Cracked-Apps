//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "WDVerticalSearchViewDelegate.h"

@class NSString, SSWebViewContainer, WDClassifySearchListViewModel, WDDetailSearchTitleView;

@interface WDClassifySearchListViewController : SSViewControllerBase <WDVerticalSearchViewDelegate>
{
    _Bool _hideProgressView;
    WDDetailSearchTitleView *_searchTitleView;
    WDClassifySearchListViewModel *_viewModel;
    SSWebViewContainer *_webView;
}

+ (void)load;
@property(nonatomic) _Bool hideProgressView; // @synthesize hideProgressView=_hideProgressView;
@property(retain, nonatomic) SSWebViewContainer *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WDClassifySearchListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WDDetailSearchTitleView *searchTitleView; // @synthesize searchTitleView=_searchTitleView;
- (void).cxx_destruct;
- (void)searchViewCancelButtonClicked:(id)arg1;
- (id)settedFontShortString;
- (void)loadRequest;
- (void)themeChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithGdExtJson:(id)arg1 apiParams:(id)arg2;
- (id)initWithBaseCondition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

