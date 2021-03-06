/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PROPlugIn.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PROPlugInDelegate, PKPlugIn;
@class NSBundle, NSDictionary, PROPlugInGroup, NSString, NSURL;

@interface PROConcretePlugIn : PROPlugIn <NSCopying> {

	NSBundle* bundle;
	CFUUIDRef uuidRef;
	NSDictionary* infoDictionary;
	PROPlugInGroup* group;
	NSString* localizationTableName;
	NSURL* helpURL;
	id sharedInstance;
	struct {
		unsigned loadedInstanceEver : 1;
		unsigned checkedForIcon : 1;
		unsigned checkedForHelp : 1;
	}  plugInFlags;
	id<PROPlugInDelegate> delegate;
	id<PKPlugIn> pluginKitPlug;
	BOOL _isBlocked;
	NSString* _blockedLookupKey;

}
-(void)setIsBlocked:(BOOL)arg1 ;
-(id)vendorName;
-(id)pluginKitPlug;
-(Class)plugInClass;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)plugInInstance;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)helpURL;
-(id)infoString;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 pluginKitPlug:(id)arg4 ;
-(BOOL)isBlocked;
-(id)uuidString;
-(void)reportError:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CFUUIDRef)uuid;
-(void)setDelegate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(id)version;
-(id)group;
-(id)infoDictionary;
-(id)bundle;
-(id)className;
-(id)displayName;
@end

