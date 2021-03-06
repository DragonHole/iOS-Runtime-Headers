/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstFaceConfigEntry : NSObject {

	int faceId;
	CGRect faceRect;
	int framesSinceLast;

}

@property (assign) int faceId; 
@property (assign) CGRect faceRect; 
@property (assign) int framesSinceLast; 
-(id)initWithRect:(CGRect)arg1 withFaceId:(int)arg2 ;
-(int)faceId;
-(void)setFaceId:(int)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
@end

