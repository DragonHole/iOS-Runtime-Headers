/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString * overlayString; 
@property (readonly) CGRect boundingBox; 
@property (readonly) float rotation; 
-(CGRect)boundingBox;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)setOverlayString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)overlayString;
@end

