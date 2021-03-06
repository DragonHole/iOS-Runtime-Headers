/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HDJournalEntry : NSObject <NSSecureCoding> {

	BOOL _requiresSecureDelete;

}

@property (assign,nonatomic) BOOL requiresSecureDelete;              //@synthesize requiresSecureDelete=_requiresSecureDelete - In the implementation block
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)requiresSecureDelete;
-(void)setRequiresSecureDelete:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

