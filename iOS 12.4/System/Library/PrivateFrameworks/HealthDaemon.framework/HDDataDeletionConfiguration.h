/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDSQLitePredicate;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _generateDeletedObjects;
	BOOL _failIfNotFound;
	BOOL _notifyObservers;
	BOOL _secureDelete;
	/*^block*/id _recursiveDeleteAuthorizationBlock;
	NSString* _restrictedSourceBundleIdentifier;
	HDSQLitePredicate* _predicate;
	Class _entityClass;

}

@property (assign,nonatomic) BOOL generateDeletedObjects;                            //@synthesize generateDeletedObjects=_generateDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL failIfNotFound;                                    //@synthesize failIfNotFound=_failIfNotFound - In the implementation block
@property (assign,nonatomic) BOOL notifyObservers;                                   //@synthesize notifyObservers=_notifyObservers - In the implementation block
@property (assign,nonatomic) BOOL secureDelete;                                      //@synthesize secureDelete=_secureDelete - In the implementation block
@property (nonatomic,copy) id recursiveDeleteAuthorizationBlock;                     //@synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock - In the implementation block
@property (nonatomic,copy) NSString * restrictedSourceBundleIdentifier;              //@synthesize restrictedSourceBundleIdentifier=_restrictedSourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) Class entityClass;                                        //@synthesize entityClass=_entityClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)entityClass;
-(void)setEntityClass:(Class)arg1 ;
-(void)setRecursiveDeleteAuthorizationBlock:(id)arg1 ;
-(void)setNotifyObservers:(BOOL)arg1 ;
-(id)recursiveDeleteAuthorizationBlock;
-(BOOL)secureDelete;
-(NSString *)restrictedSourceBundleIdentifier;
-(BOOL)generateDeletedObjects;
-(BOOL)failIfNotFound;
-(BOOL)notifyObservers;
-(void)setGenerateDeletedObjects:(BOOL)arg1 ;
-(void)setFailIfNotFound:(BOOL)arg1 ;
-(void)setSecureDelete:(BOOL)arg1 ;
-(void)setRestrictedSourceBundleIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(HDSQLitePredicate *)predicate;
@end

