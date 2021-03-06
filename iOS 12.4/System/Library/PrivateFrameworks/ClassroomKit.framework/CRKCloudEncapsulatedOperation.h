/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>

@class CATOperationQueue;

@interface CRKCloudEncapsulatedOperation : CRKCloudOperation {

	CATOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) CATOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)initWithOperationQueue:(id)arg1 database:(id)arg2 ;
-(CATOperationQueue *)operationQueue;
@end

