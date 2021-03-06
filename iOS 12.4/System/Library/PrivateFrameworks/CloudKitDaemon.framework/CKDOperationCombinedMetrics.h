/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKDOperationMetrics;

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding> {

	CKDOperationMetrics* _cloudKitMetrics;
	CKDOperationMetrics* _MMCSMetrics;

}

@property (nonatomic,retain) CKDOperationMetrics * cloudKitMetrics;              //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * MMCSMetrics;                  //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(void)setCloudKitMetrics:(CKDOperationMetrics *)arg1 ;
-(CKDOperationMetrics *)MMCSMetrics;
-(void)setMMCSMetrics:(CKDOperationMetrics *)arg1 ;
-(CKDOperationMetrics *)cloudKitMetrics;
-(id)initWithCloudKitMetrics:(id)arg1 andMMCSMetrics:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

