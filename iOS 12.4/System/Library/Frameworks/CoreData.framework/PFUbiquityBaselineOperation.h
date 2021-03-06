/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquityImportOperation.h>

@class NSString, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {

	NSString* _modelVersionHash;
	NSManagedObjectModel* _model;

}

@property (nonatomic,readonly) NSString * modelVersionHash;               //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * model;              //@synthesize model=_model - In the implementation block
-(NSString *)modelVersionHash;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSManagedObjectModel *)model;
@end

