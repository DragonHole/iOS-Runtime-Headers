/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWRedEyeReductionControllerInputDelegate, BWStillImageProcessorControllerDelegate;
@class NSArray;

@interface BWRedEyeReductionControllerInput : BWStillImageProcessorInput {

	id<BWRedEyeReductionControllerInputDelegate> _inputDelegate;
	id<BWStillImageProcessorControllerDelegate> _processorControllerDelegate;
	opaqueCMSampleBufferRef _primaryImage;
	opaqueCMSampleBufferRef _auxImage;
	NSArray* _faceObservations;

}

@property (nonatomic,retain) id<BWRedEyeReductionControllerInputDelegate> inputDelegate;                           //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,retain) id<BWStillImageProcessorControllerDelegate> processorControllerDelegate;              //@synthesize processorControllerDelegate=_processorControllerDelegate - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef primaryImage;                                               //@synthesize primaryImage=_primaryImage - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef auxImage;                                                   //@synthesize auxImage=_auxImage - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                                                         //@synthesize faceObservations=_faceObservations - In the implementation block
+(BOOL)requiresInferencesFromFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(opaqueCMSampleBufferRef)primaryImage;
-(id<BWRedEyeReductionControllerInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<BWRedEyeReductionControllerInputDelegate>)arg1 ;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 faceObservations:(id)arg2 ;
-(NSArray *)faceObservations;
-(opaqueCMSampleBufferRef)auxImage;
-(id<BWStillImageProcessorControllerDelegate>)processorControllerDelegate;
-(void)setProcessorControllerDelegate:(id<BWStillImageProcessorControllerDelegate>)arg1 ;
@end
