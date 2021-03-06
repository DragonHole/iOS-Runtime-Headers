/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class NSMutableDictionary, NSString;

@interface PABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	NSString* _buildNumber;
	BOOL _dirty;
	BOOL _enabled;

}

@property (assign) BOOL enabled; 
+(id)sharedBinaryLocator;
-(id)mappings;
-(id)urlForUUID:(id)arg1 ;
-(BOOL)removeURLForUUID:(id)arg1 ;
-(BOOL)addURLForCSSymbolOwner:(CSTypeRef)arg1 ;
-(void)saveMappings;
-(BOOL)addURL:(id)arg1 ForUUID:(id)arg2 ;
-(id)initSharedBinaryLocator;
-(void)_saveMappings;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(oneway void)done;
@end

