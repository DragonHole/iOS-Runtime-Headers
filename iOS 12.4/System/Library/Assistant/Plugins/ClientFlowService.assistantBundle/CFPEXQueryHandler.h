/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFPEXQuery.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface CFPEXQueryHandler : SACFPEXQuery <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pexCriteriaFieldsDictionary;
-(unsigned char)pexCriteriaType;
-(unsigned char)pexCriteriaSubType;
-(unsigned char)pexCriteriaSemanticTag;
-(unsigned)pexCriteriaFields;
-(unsigned char)pexCriteriaTime;
-(id)pexLabel;
-(id)pexSiriBroker;
-(unsigned long long)pexQueryLimit;
-(id)itemSourceFromPEXSource:(unsigned char)arg1 ;
-(id)criteriaFieldsFromPexCriteriaFields:(unsigned)arg1 ;
-(id)itemFlagsFromPEXItemFlag:(unsigned char)arg1 ;
-(long long)pexQueryTimeout;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(id)bundleId;
@end

