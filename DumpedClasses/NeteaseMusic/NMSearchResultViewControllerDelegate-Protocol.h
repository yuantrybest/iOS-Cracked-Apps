//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSearchResultViewController, NSString, UIViewController;

@protocol NMSearchResultViewControllerDelegate <NSObject>

@optional
- (void)searchResultViewController:(NMSearchResultViewController *)arg1 feedBackClicked:(UIViewController *)arg2;
- (void)searchResultViewController:(NMSearchResultViewController *)arg1 resultClicked:(id)arg2;
- (void)searchResultViewController:(NMSearchResultViewController *)arg1 pushViewController:(UIViewController *)arg2;
- (void)searchResultViewControllerShouldHideKeyboard:(NMSearchResultViewController *)arg1;
- (void)searchResultViewController:(NMSearchResultViewController *)arg1 errorCorrectClicked:(NSString *)arg2 correctType:(unsigned long long)arg3 queryCorrect:(_Bool)arg4;
@end

