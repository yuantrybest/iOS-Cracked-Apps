//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

@class QZMoodUploadOperation;

@interface QZAsynSendMoodOperation : QZBaseOperation
{
    QZMoodUploadOperation *_parentOperation;
}

@property __weak QZMoodUploadOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (void).cxx_destruct;
- (void)cancelJob:(_Bool)arg1;
- (void)execute;

@end

