//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYCustomizeSubscribeManager, NSMutableArray, NSString, QYPageData;

@interface QYCategoryModel : NSObject <IQYDataLoadManagerDelegate>
{
    NSMutableArray *orderArray;
    _Bool _haveChanged;
    NSMutableArray *_outerCategoryArray;
    NSMutableArray *_allCategoryArray;
    NSMutableArray *_cardsArr;
    NSMutableArray *_top12Array;
    QYPageData *_meunPageData;
    NSMutableArray *_orderViewDataArr;
    NSMutableArray *_recommendArr;
    long long _orderCount;
    NSMutableArray *_unchangeArray;
    IQYCustomizeSubscribeManager *_orderUploadManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IQYCustomizeSubscribeManager *orderUploadManager; // @synthesize orderUploadManager=_orderUploadManager;
@property(retain, nonatomic) NSMutableArray *unchangeArray; // @synthesize unchangeArray=_unchangeArray;
@property(nonatomic) _Bool haveChanged; // @synthesize haveChanged=_haveChanged;
@property(nonatomic) long long orderCount; // @synthesize orderCount=_orderCount;
@property(retain, nonatomic) NSMutableArray *recommendArr; // @synthesize recommendArr=_recommendArr;
@property(retain, nonatomic) NSMutableArray *orderViewDataArr; // @synthesize orderViewDataArr=_orderViewDataArr;
@property(retain, nonatomic) QYPageData *meunPageData; // @synthesize meunPageData=_meunPageData;
@property(retain, nonatomic) NSMutableArray *top12Array; // @synthesize top12Array=_top12Array;
@property(retain, nonatomic) NSMutableArray *cardsArr; // @synthesize cardsArr=_cardsArr;
@property(retain, nonatomic) NSMutableArray *allCategoryArray; // @synthesize allCategoryArray=_allCategoryArray;
@property(readonly, retain, nonatomic) NSMutableArray *outerCategoryArray; // @synthesize outerCategoryArray=_outerCategoryArray;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (_Bool)isInOrderArr:(id)arg1;
- (void)convertCardsArrData;
- (long long)getItemIndexQYChannelCategoryInfoArr:(id)arg1 item:(id)arg2;
- (_Bool)addCatergoryToTopWithCategoryID:(id)arg1;
- (void)moveCategory:(id)arg1 fromPostion:(long long)arg2 toPosition:(long long)arg3;
- (void)removeCategory:(id)arg1;
- (void)addCategory:(id)arg1;
- (id)parseQYBisonTabs:(id)arg1 withCardData:(id)arg2;
- (id)parseQYBisonTabs:(id)arg1;
- (void)uploadUserOrderChannels;
- (void)recreateRecommendArr;
- (void)getArrsFromPageData;
- (void)savePageData;
- (void)recreatePageData;
- (void)removeAllArrs;
- (void)commonInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

