/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CIRenderInfo : NSObject {

	void* _priv;

}

@property (readonly) double kernelExecutionTime; 
@property (readonly) long long passCount; 
@property (readonly) long long pixelsProcessed; 
+(id)renderInfoWithCompletedTask:(id)arg1 ;
-(id)_pdfDataRepresentation;
-(id)initWithCompletedTask:(id)arg1 ;
-(double)kernelExecutionTime;
-(long long)kernelExecutionCycles;
-(long long)pixelsProcessed;
-(long long)pixelsOverdrawn;
-(double)timeForNodeID:(unsigned long long)arg1 ;
-(long long)passCount;
-(id)init;
-(void)dealloc;
-(id)description;
@end

