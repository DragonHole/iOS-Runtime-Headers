/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WFModuleSummaryTemplateBuilder : NSObject {

	NSString* _formatString;
	NSArray* _formatItems;
	NSArray* _parameterKeys;

}

@property (nonatomic,retain) NSArray * formatItems;                       //@synthesize formatItems=_formatItems - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeys;                       //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatString;              //@synthesize formatString=_formatString - In the implementation block
+(id)slotsForMultipleParameterState:(id)arg1 inParameter:(id)arg2 ;
+(BOOL)formatString:(id)arg1 containsParameterKey:(id)arg2 ;
-(NSArray *)parameterKeys;
-(void)setParameterKeys:(NSArray *)arg1 ;
-(NSString *)formatString;
-(id)initWithFormatString:(id)arg1 ;
-(void)itemizeFormatStringIfNeeded;
-(id)contentByEnumeratingSummaryWithParameterSlotBuilder:(/*^block*/id)arg1 ;
-(id)buildContentWithParameters:(id)arg1 editableParameters:(id)arg2 parameterStates:(id)arg3 variableBeingEdited:(id)arg4 ;
-(NSArray *)formatItems;
-(void)setFormatItems:(NSArray *)arg1 ;
@end

