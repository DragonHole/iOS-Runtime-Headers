/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDFetchRecordAncestorsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDs;

}

@property (nonatomic,retain) NSArray * recordIDs;              //@synthesize recordIDs=_recordIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

