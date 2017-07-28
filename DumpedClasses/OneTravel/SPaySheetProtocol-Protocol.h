//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPaySheetView, UIButton;

@protocol SPaySheetProtocol <NSObject>

@optional
- (void)paySheet:(SPaySheetView *)arg1 didDeductionsSelectedAtIndex:(unsigned long long)arg2;
- (void)paySheet:(SPaySheetView *)arg1 actionButtonDidPressedAtIndex:(long long)arg2;
- (void)paySheet:(SPaySheetView *)arg1 didDoneWithHandleType:(unsigned long long)arg2;
- (void)paySheet:(SPaySheetView *)arg1 didCancelWithHandleType:(unsigned long long)arg2;
- (void)paySheet:(SPaySheetView *)arg1 didExpendChannelsButtonPressed:(UIButton *)arg2;
- (_Bool)paySheet:(SPaySheetView *)arg1 shouldSelectedChannel:(unsigned long long)arg2;
- (void)paySheet:(SPaySheetView *)arg1 didSelectedChannel:(unsigned long long)arg2;
- (void)paySheet:(SPaySheetView *)arg1 didPayButtonPressed:(UIButton *)arg2;
@end
