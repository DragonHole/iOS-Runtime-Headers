/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CKDatabase;

@interface CRKCloudOperation : CATOperation {

	CKDatabase* _database;

}

@property (nonatomic,readonly) CKDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)new;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)isAsynchronous;
-(CKDatabase *)database;
-(id)init;
@end

