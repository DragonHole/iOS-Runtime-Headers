/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface _DPBitValueRecordMO : NSManagedObject

@property (assign,nonatomic) short clearBitValue; 
@property (assign,nonatomic) double creationDate; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * privateBitValueStr; 
@property (assign,nonatomic) long long reportVersion; 
@property (assign,nonatomic) BOOL submitted; 
+(id)fetchRequest;
@end
