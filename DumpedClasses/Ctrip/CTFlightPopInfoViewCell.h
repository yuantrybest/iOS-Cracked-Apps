//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightPopInfoViewCellModel;

@interface CTFlightPopInfoViewCell : UITableViewCell
{
    id <CTFlightPopInfoViewCellDelegate> _delegate;
    CTFlightPopInfoViewCellModel *_cellModel;
}

+ (double)heightOfRightPartWithModel:(id)arg1;
+ (double)heightOfTableViewWithModel:(id)arg1;
+ (double)heightOfScheduleViewWithModel:(id)arg1;
+ (double)heightOfDotViewWithModel:(id)arg1;
+ (double)heightOfNumberViewWithModel:(id)arg1;
+ (double)heightOfPlainViewWithModel:(id)arg1;
+ (double)heightOfParaTitleViewWithModel:(id)arg1;
+ (double)heightOfMainTitleViewWithModel:(id)arg1;
+ (double)heightOfFoldView;
+ (id)createCellWithModel:(id)arg1 delegate:(id)arg2;
+ (double)heightOfCellWithModel:(id)arg1;
@property(retain, nonatomic) CTFlightPopInfoViewCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak id <CTFlightPopInfoViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createRightPartWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createTableViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createScheduleViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createDotViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createNumberViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createPlainViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createParaTitleViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (id)createMainTitleViewWithModel:(id)arg1 atCoordY:(double)arg2;
- (void)clickFoldButton:(id)arg1;
- (id)createFoldViewWithIndex:(long long)arg1 atCoordY:(double)arg2;
- (id)init;

@end
