/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFanOutNode.h>

@class NSArray, NSMutableDictionary;

@interface BWAttachedMediaSplitNode : BWFanOutNode {

	NSArray* _attachedMediaKeys;
	NSMutableDictionary* _attachedMediaFormatDescriptions;
	int _numOutputs;
	BOOL _emitsNodeErrorsForMissingAttachedMedia;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithAttachedMediaKeys:(id)arg1 ;
-(void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)arg1 ;
-(BOOL)emitsNodeErrorsForMissingAttachedMedia;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)dealloc;
@end

