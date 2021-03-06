//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKElement.h"

@class CALayer;

@interface KKCanvasElement : KKElement
{
    CALayer *_canvas;
}

+ (id)elementWithCanvas:(id)arg1;
+ (id)elementWithName:(id)arg1 parent:(id)arg2;
@property(retain, nonatomic) CALayer *canvas; // @synthesize canvas=_canvas;
- (void).cxx_destruct;
- (id)copyElementWithZone:(struct _NSZone *)arg1;
- (void)didAddToParent:(id)arg1;
- (void)didRemoveFromParent:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)withCanvas:(CDUnknownBlockType)arg1;
- (void)property:(struct KKProperty *)arg1 changedValue:(id)arg2;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1;

@end

