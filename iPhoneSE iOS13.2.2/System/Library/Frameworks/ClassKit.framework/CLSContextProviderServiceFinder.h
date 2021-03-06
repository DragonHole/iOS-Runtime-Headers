/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSContextProviderServiceFinderDelegate, OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, NSArray;

@interface CLSContextProviderServiceFinder : NSObject {

	id<CLSContextProviderServiceFinderDelegate> _delegate;
	id _extensionsFinderContext;
	NSObject*<OS_dispatch_queue> _servicesQueue;
	NSDictionary* _extensionAttributes;
	NSMutableArray* _mutableAvailableServices;

}

@property (nonatomic,copy,readonly) NSArray * availableServices; 
-(id)init;
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(NSArray *)availableServices;
@end

