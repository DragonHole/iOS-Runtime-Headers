/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger {

	NSArray* _selectedApps;

}

@property (nonatomic,copy) NSArray * selectedApps;              //@synthesize selectedApps=_selectedApps - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSArray *)selectedApps;
-(void)setSelectedApps:(NSArray *)arg1 ;
@end
