/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDictionary;

@interface MSDKF200EventEntityMO : NSManagedObject

@property (assign,nonatomic) BOOL committed; 
@property (nonatomic,copy) NSString * dedupKey; 
@property (nonatomic,copy) NSString * kind; 
@property (nonatomic,retain) NSDictionary * optionalKeys; 
@property (nonatomic,copy) NSString * senderUid; 
@property (nonatomic,copy) NSString * sourceUid; 
@property (assign,nonatomic) long long timestamp; 
+(id)fetchRequest;
@end

