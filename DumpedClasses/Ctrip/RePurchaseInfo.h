//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface RePurchaseInfo : CTBusinessBean
{
    NSString *_additionInfoID;
    NSString *_cnyAmount;
    NSString *_remark;
}

@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *cnyAmount; // @synthesize cnyAmount=_cnyAmount;
@property(copy, nonatomic) NSString *additionInfoID; // @synthesize additionInfoID=_additionInfoID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
