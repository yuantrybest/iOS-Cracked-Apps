//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTContactEditWidget_train;

@protocol CTContactEditWidget_trainDelegate <NSObject>

@optional
- (_Bool)contactEditWidget:(CTContactEditWidget_train *)arg1 checkNode:(id)arg2;
- (void)contactEditWidget:(CTContactEditWidget_train *)arg1 deleteNode:(id)arg2;
- (void)contactEditWidget:(CTContactEditWidget_train *)arg1 editedNode:(id)arg2;
- (void)contactEditWidget:(CTContactEditWidget_train *)arg1 addNewNode:(id)arg2;
- (void)contactEditWidgetCanceled:(CTContactEditWidget_train *)arg1;
@end
