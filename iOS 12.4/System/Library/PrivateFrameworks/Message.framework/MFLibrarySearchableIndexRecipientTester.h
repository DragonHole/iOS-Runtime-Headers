/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFLibrarySearchableIndexTesting.h>

@class MFLibrarySearchableIndexQueryContext, NSString;

@interface MFLibrarySearchableIndexRecipientTester : NSObject <MFLibrarySearchableIndexTesting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MFLibrarySearchableIndexQueryContext * context; 
-(id)transformDataForVerification:(id)arg1 ;
-(id)spotlightQueryFromDataSamples:(id)arg1 ;
-(BOOL)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2 ;
-(MFLibrarySearchableIndexQueryContext *)context;
@end

