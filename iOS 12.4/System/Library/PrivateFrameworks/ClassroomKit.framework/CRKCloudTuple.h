/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCloudStoring;
@interface CRKCloudTuple : NSObject {

	id<CRKCloudStoring> _originalObject;
	id<CRKCloudStoring> _changedObject;

}

@property (nonatomic,readonly) id<CRKCloudStoring> originalObject;              //@synthesize originalObject=_originalObject - In the implementation block
@property (nonatomic,readonly) id<CRKCloudStoring> changedObject;               //@synthesize changedObject=_changedObject - In the implementation block
+(id)new;
-(id<CRKCloudStoring>)changedObject;
-(id<CRKCloudStoring>)originalObject;
-(id)initWithChangedObject:(id)arg1 originalObject:(id)arg2 ;
-(id)init;
@end

