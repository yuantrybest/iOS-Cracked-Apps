//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EMCursorResult : NSObject
{
    NSArray *_list;
    NSString *_cursor;
}

+ (id)cursorResultWithList:(id)arg1 andCursor:(id)arg2;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

