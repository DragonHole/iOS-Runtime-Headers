/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalAuthorizationSessionCreateJournalEntry.h>

@class NSString;

@interface HDClinicalAuthorizationSessionCreateInitialLoginJournalEntry : HDClinicalAuthorizationSessionCreateJournalEntry {

	NSString* _gatewayExternalID;

}

@property (nonatomic,copy,readonly) NSString * gatewayExternalID;              //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)gatewayExternalID;
-(id)initWithState:(id)arg1 queryString:(id)arg2 gatewayExternalID:(id)arg3 ;
@end

