/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength; 
@property (assign,nonatomic) unsigned long long blurDeterminationMethod; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(unsigned long long)blurDeterminationMethod;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
@end
