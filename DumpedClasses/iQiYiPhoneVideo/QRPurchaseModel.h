//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QRBaseModel.h"

@class NSArray, NSString;

@interface QRPurchaseModel : QRBaseModel
{
    long long _beginChapterId;
    NSString *_beginChapterName;
    long long _bookId;
    long long _canPayCount;
    NSArray *_item;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSArray *item; // @synthesize item=_item;
@property(nonatomic) long long canPayCount; // @synthesize canPayCount=_canPayCount;
@property(nonatomic) long long bookId; // @synthesize bookId=_bookId;
@property(copy, nonatomic) NSString *beginChapterName; // @synthesize beginChapterName=_beginChapterName;
@property(nonatomic) long long beginChapterId; // @synthesize beginChapterId=_beginChapterId;
- (void).cxx_destruct;

@end

