//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WDHeaderInfoCellData, WDUserStructModel;

@interface WDHeaderInfoCellViewModel : NSObject
{
    WDHeaderInfoCellData *_cellData;
    NSArray *_tabModels;
    WDUserStructModel *_userModel;
}

+ (id)getModelFromWDHeaderData:(id)arg1;
@property(retain, nonatomic) WDUserStructModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) NSArray *tabModels; // @synthesize tabModels=_tabModels;
@property(retain, nonatomic) WDHeaderInfoCellData *cellData; // @synthesize cellData=_cellData;
- (void).cxx_destruct;
- (void)refreshByData:(id)arg1;
- (id)initFromWDHeaderData:(id)arg1;

@end
