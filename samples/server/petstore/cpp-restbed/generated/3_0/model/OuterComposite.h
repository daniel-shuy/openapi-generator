/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OuterComposite.h
 *
 * 
 */

#ifndef OuterComposite_H_
#define OuterComposite_H_



#include <string>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OuterComposite 
{
public:
    OuterComposite() = default;
    explicit OuterComposite(boost::property_tree::ptree const& pt);
    virtual ~OuterComposite() = default;

    OuterComposite(const OuterComposite& other) = default; // copy constructor
    OuterComposite(OuterComposite&& other) noexcept = default; // move constructor

    OuterComposite& operator=(const OuterComposite& other) = default; // copy assignment
    OuterComposite& operator=(OuterComposite&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// OuterComposite members

    /// <summary>
    /// 
    /// </summary>
    double getMyNumber() const;
    void setMyNumber(double value);

    /// <summary>
    /// 
    /// </summary>
    std::string getMyString() const;
    void setMyString(std::string value);

    /// <summary>
    /// 
    /// </summary>
    bool isMyBoolean() const;
    void setMyBoolean(bool value);

protected:
    double m_My_number = 0.0;
    std::string m_My_string = "";
    bool m_My_boolean = false;
};

std::vector<OuterComposite> createOuterCompositeVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<OuterComposite>(const OuterComposite& val) {
    return val.toPropertyTree();
}

template<>
inline OuterComposite fromPt<OuterComposite>(const boost::property_tree::ptree& pt) {
    OuterComposite ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* OuterComposite_H_ */