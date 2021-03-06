/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoServices/PHMediaFormatConversionRequest.h>

@interface PHMediaFormatConversionCompositeRequest : PHMediaFormatConversionRequest
-(BOOL)requiresFormatConversion;
-(void)setupProgress;
-(BOOL)isCompositeRequest;
-(void)didPreflightSubrequest:(id)arg1 ;
-(void)preflightWithConversionManager:(id)arg1 ;
-(void)didFinishProcessing;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(BOOL)areAllSubrequestsPreflighted;
-(id)compositeRequestCommonInitWithError:(id*)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)propagateRequestOptionsToSubrequests;
@end

