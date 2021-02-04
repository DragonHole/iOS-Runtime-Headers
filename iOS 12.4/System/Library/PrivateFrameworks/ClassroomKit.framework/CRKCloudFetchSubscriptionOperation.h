/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>
#import <libobjc.A.dylib/CRKCloudResetable.h>

@class CKRecordZone;

@interface CRKCloudFetchSubscriptionOperation : CRKCloudOperation <CRKCloudResetable> {

	CKRecordZone* _zone;

}

@property (nonatomic,readonly) CKRecordZone * zone;              //@synthesize zone=_zone - In the implementation block
-(id)initWithDatabase:(id)arg1 ;
-(id)resetOperation;
-(id)initWithDatabase:(id)arg1 zone:(id)arg2 ;
-(CKRecordZone *)zone;
-(void)main;
@end
