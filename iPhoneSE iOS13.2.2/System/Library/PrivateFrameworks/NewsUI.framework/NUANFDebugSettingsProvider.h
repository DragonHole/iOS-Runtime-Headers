/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUANFDebugSettingsProvider.h>

@protocol NUANFDebugSettingsProvider <NSObject>
@property (nonatomic,readonly) BOOL viewportDebuggingEnabled; 
@property (nonatomic,readonly) BOOL testingConditionEnabled; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(BOOL)viewportDebuggingEnabled;
-(BOOL)testingConditionEnabled;

@end


@class NSString;

@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider> {

	BOOL _viewportDebuggingEnabled;
	BOOL _testingConditionEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL viewportDebuggingEnabled;              //@synthesize viewportDebuggingEnabled=_viewportDebuggingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL testingConditionEnabled;               //@synthesize testingConditionEnabled=_testingConditionEnabled - In the implementation block
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)viewportDebuggingEnabled;
-(BOOL)testingConditionEnabled;
@end

