//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DCPriceInputModel : JSONModel
{
    NSString<Optional> *_title;
    NSString<Optional> *_memo;
    NSString<Optional> *_button;
    NSString<Optional> *_max_price;
    NSString<Optional> *_min_price;
}

@property(copy, nonatomic) NSString<Optional> *min_price; // @synthesize min_price=_min_price;
@property(copy, nonatomic) NSString<Optional> *max_price; // @synthesize max_price=_max_price;
@property(copy, nonatomic) NSString<Optional> *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString<Optional> *memo; // @synthesize memo=_memo;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

